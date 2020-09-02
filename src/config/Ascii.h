// Copyright (c) 2018, The TurtleCoin Developers
//
// Please see the included LICENSE file for more information

#pragma once

#include <string>

const std::string windowsAsciiArt = "
   ______     ______     __    __     ______     ______     __     __   __     "  
" /\  __ \   /\  __ \   /\ "-./  \   /\  ___\   /\  __ \   /\ \   /\ "-.\ \    " 
"  \ \ \/\_\  \ \  __ \  \ \ \-./\ \  \ \ \____  \ \ \/\ \  \ \ \  \ \ \-.  \  "  
"   \ \___\_\  \ \_\ \_\  \ \_\ \ \_\  \ \_____\  \ \_____\  \ \_\  \ \_\\"\_\ "
"    \/___/_/   \/_/\/_/   \/_/  \/_/   \/_____/   \/_____/   \/_/   \/_/ \/_/ ";
                                                                                

const std::string nonwindowsAsciiArt = "
   ______     ______     __    __     ______     ______     __     __   __     "  
" /\  __ \   /\  __ \   /\ "-./  \   /\  ___\   /\  __ \   /\ \   /\ "-.\ \    " 
"  \ \ \/\_\  \ \  __ \  \ \ \-./\ \  \ \ \____  \ \ \/\ \  \ \ \  \ \ \-.  \  "  
"   \ \___\_\  \ \_\ \_\  \ \_\ \ \_\  \ \_____\  \ \_____\  \ \_\  \ \_\\"\_\ "
"    \/___/_/   \/_/\/_/   \/_/  \/_/   \/_____/   \/_____/   \/_/   \/_/ \/_/ ";


/* Windows has some characters it won't display in a terminal. If your ascii
   art works fine on Windows and Linux terminals, just replace 'asciiArt' with
   the art itself, and remove these two #ifdefs and above ascii arts */
#ifdef _WIN32

const std::string asciiArt = windowsAsciiArt;

#else
const std::string asciiArt = nonWindowsAsciiArt;
#endif
