# Description
This project is a Tower Defense game made in c++.



# Dev Environment


## Visual Studio

We used Visual Studio as our development IDE. SDL has development libraries made specifically for it.

To build the project, **make sure to add the include folder in the project's include directories** if you are using Visual Studio.
And **make sure the dependencies (see bellow) are added as well**.


## Dependencies
We will mainly rely on SDL2 to build this game. So for now, SDL2 libraries are the only dependencies needed to build the project.

Additional libraries include the peripheral libraries that comes with SDL2.

This includes:

SDL2_image

SDL2_mixer

SDL2_ttf

SDL2_net

Make sure to add them to Visual Studio's project dependencies.

You can do that in Project properties > Configuration Properties > VC++ Directories

Add the include directories

Add the lib directories


And in Configuration Properties > Linker > Additional Dependencies, add the necessary additional dependencies.

In our case:

SDL2.lib; SDL2main.lib; SDL2_mixer.lib; SDL2_ttf.lib; SDL2_net.lib; SDL2_image.lib
