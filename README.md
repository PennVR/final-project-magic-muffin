# final-project-magic-muffin
final-project-magic-muffin created by GitHub Classroom

Project Name: Magic Muffin

Demo link: https://www.youtube.com/watch?v=wJLWSaUvPZE&feature=youtu.be

Techniques used:
Music extraction: extracted frequency, amplitude, and bpm to act as inputs for certain objects in the music world in order to have the world driven by the music
Spline movement: created splines to define the motion of objects according to various defined paths
Linear interpolation of color: interpolated color values between our set color scheme to smooth the transition from colors of objects
Movement interpolation: interpolated motion of objects to smooth them and make them more natural appearing 
Teleportation + preview: allow user to cast an object where they would be teleported, providing a higher control for user locomotion. Implemented a preview window (so the user could see their new position) that was ultimately scrapped as it detracted from the view and was not necessary in our experience 
Haptic feedback: provide feedback as positive response to actions (popping bubble, picking up muffin)
Sound feedback: provide feedback as positive response to actions (popping bubble)

How to play: HTC Vive + 2 hand controllers - use the right controller as a hand to touch objects, pick things up, etc. Use right trigger to pick up and hold an object, let go of the trigger to drop. Simply touching objects with right trigger will pop. Use left controller for locomotion - hold down trigger to cast object, let go to teleport.

Motion sickness: We did not! One concern we had was that the muffin pull (automatic motion towards the muffin upon eye contact) would make the user sick, but we kept the movement very slow and the distance small and found that there was not much effect. With the transition to the music room we have a fade that helps the user orient themselves to their new environment. With teleportation we also have fade which helps with this as well, plus the user being able to see where they will go through a physical object’s location may also be helpful.

Hardest part: In our project, we really focused on making the environment as immersive as possible. Several of those techniques were challenging. Using interpolation in the object movement and color change was difficult to understand conceptually and, once implemented, to find a good balance that felt natural. Spline motion was another thing that took a long time. 

What you should have done differently: Any increased amount of interaction in the music room would have been great! We love our final application but can definitely see that the opportunities for expansion are almost endless and it would have been nice to explore further. For example, scaling shapes was something we wanted to allow in the music room, but did not get the chance to implement. 

What we should have done differently: 
