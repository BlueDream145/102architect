# 102architect
Epitech Project, MATHS 102

Subject:
the goal of this project is to develop an application to compute points images in the plan after several transfor-
mations.
To make it nice and clean, you chose to use homogeneous coordinates. How clever of you.
O being the origin of both axis, here are the transformations to be implemented :
- any translation,
- homtheties centered at 0,
- rotations centered at 0,
- symmetries about any axis that passes through 0,
- many combination of the previous transformations.

Usage:
∼/B-MAT-100> ./102architect x y transfo1 arg1 [arg2] [transfor2 arg2 [arg2]] ...

x abscissa of the original point
y ordinate of the original point
transfo arg1 [arg2]
-t i j : translation along the coordinate vector (i, j)
-h m n : homothety with center 0 and scale factors m along x-axis and n along y-axis,
-r α : rotation centered in O at angle α degrees,
-s α : symmetry about the axis passing by 0 and inclined with an α-degree angle.

Example:

![alt text](https://github.com/alexandre10044/102architect/blob/master/example.png?raw=true)
