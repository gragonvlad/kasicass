#include "UxProgressBar.hpp"

namespace Ux {

ProgressBar::ProgressBar(UINT fg, UINT bg) : percent_(0.0f)
{
	foreground_.load(fg);
	background_.load(bg);
}

ProgressBar::~ProgressBar()
{
}

float ProgressBar::percent() const
{
	return percent_;
}

void ProgressBar::percent(float p)
{
	if (p < 0.0f) percent_ = 0.0f;
	else if (p > 1.0f) percent_ = 1.0f;
	else percent_ = p;

	notifyRedraw();
}

void ProgressBar::onDraw(Gdiplus::Graphics& g)
{
	int w = background_.width();
	int h = background_.height();
	g.DrawImage(background_, x_, y_, w, h);
	g.DrawImage(background_, x_, y_+100);

	//w = int(foreground_.width() * percent_);
	//h = foreground_.height();

	//w = int(w * percent_);
	//g.DrawImage(foreground_, x_, y_, 0, 0, 100, 20, Gdiplus::UnitPixel);
	// g.DrawImage(foreground_, x_, y_, w, h);
}

void ProgressBar::onDestroy()
{
	foreground_.release();
	background_.release();
}

ProgressBarPtr createProgressBar(UINT fg, UINT bg)
{
	return std::make_shared<ProgressBar>(fg, bg);
}

}