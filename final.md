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
developer specify how to build the project by specifiying _targets_, which are
modules that can be built independently.  This is done in a special "makefile".
This lets the developer only compile the files that have changed since the last 
build.

Since many of our developers use Java, `ant` is another good build automation
tool, specifically designed for building Java projects.  While `make` is written
with a special file, `ant` targets are specified in an xml file.  In addition to
this, the operations used in `ant` to build projects are not specific to any
platform.  Makefiles usually depend on the system having tools like `rm` and
`mv`, but `ant` only requires that Java is on the system.  This makes `ant` as
portable as Java.

I urge you, Santa, to consider incorporating build automation in our shop here
at the North Pole.  It will make all of your developers more productive,
producing better quality code, faster.

Zack

