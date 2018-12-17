uint32_t packetSize = 1024;
Time interPacketInterval = Seconds (1.0);
V4PingHelper ping ("10.0.9.2");

ping.SetAttribute ("Interval", TimeValue (interPacketInterval));
ping.SetAttribute ("Size", UintegerValue (packetSize));

ApplicationContainer apps = ping.Install (src);

apps.Start (Seconds (1.0));
apps.Stop (Seconds (200.0));