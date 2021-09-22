#if false
/*
 PFM::C++ For Musicians Task
 Project 1 - Part 1 / 1
 Video: Chapter 2 Part 1
 
Create a branch named Part1

Purpose:  This project will get you thinking correctly about choosing good names for the tasks that your objects will perform. 
This project will also introduce you to the review process, and how Pull Requests work.
I will request a change be made to one of your 10 nouns for the sole purpose of showing how the review process works.

 1) write out 10 nouns in the space provided below.
    Choose nouns that do things.  
    avoid choosing nouns that have things done TO them.
    If your noun consists of multiple words, use camelCaseToNameIt.
 
 2) for each of the 10 nouns, write out 3 actions it might perform, in plain english.
    a) AVOID state-checking actions, like "Car has a horn".  i.e.
        car.hasHorn()
    b) We use 'can' and 'has' to check the state of objects, so they aren't really 'action' verbs.
        "the Car blows its horn" is a better action, because the car is doing something.  its state is not being checked.  i.e.
            car.blowsHorn()
    c) choose actions that your noun does.  Do not write out actions that are performed on your noun.
        for example: 
            noun: lightBulb.
            action: turns on.  
                This is a bad action because someone else turns on the light.  the light doesn't turn itself on. 
            a better action would be: 
                illuminates room
                This is a better action, because this is what lightbulbs do.  
            other actions that would work:
                action: consume electricity
                action: burn out and destroy filament.

        
 3) write out how you'd call that action in pseudo code, in the space after the plain-english action
 
 4) If the action requires multiple words, use camelCaseToNameIt
     don't forget the semi-colon after each statement
 */


//  example)
//  Noun:       arm                     // 1)
//  action 1:   the arm extends         // 2)
arm.extend();                           // 3)
//  action 2:   the arm flexes          // 2)
arm.flex();                             // 3)
//  action 3:   the arm rotates conter-clockwise
arm.rotateCounterClockwise();           // 4) demonstrates CamelCase


//  1)
//  Noun:       knob
//  action 1:   rotates clockwise
knob.rotateCw();
//  action 2:   rotates counterclockwise
knob.rotateAcw();
//  action 3:  when pushed, stops rotating/locks in place
knob.lockInPlace();
//  2)
//  Noun:       monitor
//  action 1:   turns on/off
monitor.turn();
//  action 2:   adjusts brightness
monitor.adjustBrightness();
//  action 3:   adjusts refresh rate
monitor.adjustRefreshRate();
//  3)
//  Noun:       fork
//  action 1:   stabs
fork.stab();
//  action 2:   bends
fork.bend();
//  action 3:   melts
fork.melt();
//  4)
//  Noun:       mixer
//  action 1:   adjusts channel  volume with a fader
mixer.adjustFaderVolume();
//  action 2:   enables EQ
mixer.enableEq();
//  action 3:   adjusts compressor trheshold
mixer.adjustCompThreshold(); 
//  5)
//  Noun:       car
//  action 1:   turns
car.turn();
//  action 2:   accelerates
car.accelerate();
//  action 3:   ejects the passenger seat
car.ejectPassengerSeat(); 
//  6)
//  Noun:       app
//  action 1:   plays sound
app.playSound();
//  action 2:   displays .png image
app.drawPng();
//  action 3:   crashes to desktop
app.crashToDesktop(); 
//  7)
//  Noun:       air compressor
//  action 1:   releases compressed air via the pistol
airComp.fire();
//  action 2:   adjusts output pressure
airComp.adjustOutputPressure();
//  action 3:   adjusts maximum pressure inside the main tank
airComp.adjustTankPressure(); 
//  8)
//  Noun:       microphone
//  action 1:   records audio
microphone.recordAudio();
//  action 2:   produces noise
microphone.produceNoise();
//  action 3:   adjusts preamp gain
microphone.adjustPreampGain();
//  9)
//  Noun:       eq
//  action 1:   adjust band frequency
eq.adjustBand1Freq();
//  action 2:   adjust band q
eq.adjustBand1Q();
//  action 3:   adjust band gain
eq.adjustBand1Gain ();
//  10)
//  Noun:       reverb
//  action 1:   adjust size
reverb.adjustSize();
//  action 2:   adjust rt60
reverb.adjustRt60();
//  action 3:   adjust predelay
reverb.adjustPredelay();


#endif

/*
 MAKE SURE YOU ARE NOT ON THE MASTER BRANCH

 Commit your changes by clicking on the Source Control panel on the left, entering a message, and click [Commit and push].
 
 If you didn't already: 
    Make a pull request after you make your first commit
    pin the pull request link and this repl.it link to our DM thread in a single message.

 send me a DM to review your pull request when the project is ready for review.

 Wait for my code review.
 */

#include <iostream>
int main()
{
    std::cout << "good to go" << std::endl;
    return 0;
}
