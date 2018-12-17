// Begin : RIP routing settings
  NS_LOG_INFO ("Create IPv4 and routing");
  RipHelper ripRouting;
  ripRouting.ExcludeInterface (a, 1);
  ripRouting.ExcludeInterface (b, 3);
  ripRouting.ExcludeInterface (c, 3);