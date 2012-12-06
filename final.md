Zack Michener  
December 7, 2012  
Data Structures  
Final Exam  

1) Build Automation
===================

Dear Santa,

I was somewhat surprised to find that developers at the North Pole don't use
build automation.  I think build automation is an important tool for every
software developement team, so I'd like to explain why it can be useful at the
North Pole.

Build automation allows a developer to build the entire project with one
command.  This makes it easier and faster to test changes as development
progresses.  For example, after implementing a new feature, a developer can
simply type `make`, and the entire project is rebuilt with the feature.
Developers can (and should!) quickly build the project as they are developing 
new features, which will reduce the number of bugs introduced at a time, making
debugging easier.  Since developers can build more easily, they will build more
often, and discover bugs more quickly.  Development time will also decrease
becasuse building is easier, and mistakes in building will disappear.

`make` is the build tool I use for C++ programming.  It simply requires that the
developer specify how to build the project by specifiying _targets_.  
