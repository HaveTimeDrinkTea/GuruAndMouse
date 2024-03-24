# GuruAndMouse

## Description
This is a text-based adventure game for the console written in C++  as part of Week 02 Assignment for the Game Developer bootcamp at [The Developer Academy](https://www.thedeveloperacademy.com).

The text-based adventure game is based on a Buddhist fable "The Nun and the mouse" about materialism. In this version, the nun is changed to a guru who lives a simple life happily in a mountain. He discovers that a mouse had gnawed his clothes and thought he might get cat from a nearby village to keep the mouse in check. Upon getting the cat, the guru realises that he needs to feed the cat and that he will need a cow to produce the milk to feed the cat to scare the mouse. Then upon getting the cow, he realises that he needed a shepherd boy to tend to the cow who give milk for the cat who will scare the mouse. So on and so forth. 

As the Guru acquires more material possession, his happiness level goes down as he has too many things to worry about. As such he decided to return the shepherd boy, the cow and the cat so that he can continues to live a simple life with the mouse as his companion instead.

The text based game requires the player to go to different villages of which can provide one of the items (cat, cow, boy, hut) and the player must acquire the items in the correct sequence before the acquiring more items. And as more items are acquired, the happiness level of the Guru declines. 

Additional feature could include having to "negotiate" with the villages for the items by "trading" blessings/wisdom.  This "negotiating" task would be analogous to a game that require combat. This "combat" could be based on randomness.

The features above would require the following in C++:
* Location class for the locations of the guru's residence and the villages
* Items class for the cat, cow etc 
* Inventory class to keep track of what the guru has and whether he is allowed to acquire an item before a required item is acquired
* Character class to keep track of "happiness" level (and/or "combat" level)


### Methodology: Pseudo Code
* plot the story
* identify the objects needed
  

## User Story

AS A gammer

I WANT to play an old school text adventure game entirely in the console

SO THAT I can be entertain and learn more about text-based adventure game development.



## Acceptance Criteria

* A working game that can be run on the console.
* A main game loop that requests input from the user
* A method to move north/south/east/west
* A way to collect items and inventory
* A method to use items in situations to progress the game
* An ending




## Table of Contents (Optional)

* [Installation](#installation)
* [Usage](#usage)
* [Credits](#credits)
* [License](#license)
* [Features](#features)
* [Testing](#testing)
* [Contribution](#contribution)


# Installation

* To download the all the code in this repo to a directory on your local machine
* compile the main.cpp
 ```
> g++ main.cpp -o main
```
* execute the game
 ```
>./main
```


## Usage 

### Video Demo (Work in progress)
[Video Demo (1 min) on Google Drive](https://drive.google.com/file/d/10QVwkPpu3T-CII2FiY4PhFMbhwFhFeju/view?usp=sharing)


## Credits

* Borley Rectory layout plans provided by [foxearth.org.uk]([https://www.thedeveloperacademy.com](https://www.foxearth.org.uk/BorleyRectoryPictures/)) 



## License 

MIT License [![License: MIT](https://img.shields.io/badge/License-MIT-yellow.svg)](https://opensource.org/licenses/MIT)



## Features

A text-based adventure game that the user can play on a console terminal.



## Testing

tbc


## Contribution
* If you would like to contribute to this application, please contact me via
  * GitHub [https://github.com/HaveTimeDrinkTea](https://github.com/HaveTimeDrinkTea)
  * email to <havetimedrinktea@gmail.com>
