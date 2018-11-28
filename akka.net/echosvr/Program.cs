﻿//-----------------------------------------------------------------------
// <copyright file="Program.cs" company="Akka.NET Project">
//     Copyright (C) 2009-2018 Lightbend Inc. <http://www.lightbend.com>
//     Copyright (C) 2013-2018 .NET Foundation <https://github.com/akkadotnet/akka.net>
// </copyright>
//-----------------------------------------------------------------------

using System;
using System.Net;
using Akka.Actor;

namespace TcpEchoService.Server
{
    class Program
    {
        static void Main(string[] args)
        {
            using (var system = ActorSystem.Create("echo-server-system"))
            {
                var port = 25000;
                var actor = system.ActorOf(Props.Create(() => new EchoService(new IPEndPoint(IPAddress.Any, port))), "echo-service");

                /**
                 *  Now you should be able to connect with current TCP actor using i.e. telnet command:
                 *  $> telnet 127.0.0.1 9001
                 */

                Console.WriteLine("TCP server is listening on *:{0}", port);
                Console.WriteLine("ENTER to exit...");
                Console.ReadLine();
            }
        }
    }
}