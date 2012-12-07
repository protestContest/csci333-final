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

2) Unit Tests
=============

Dear Santa,

I was again surprised today, to find that my project manager didn't know what a
unit test was.  It seems that few elves around here are aware of unit tests,
much less use them.  I think this is a problem; in my experience, unit tests
increase developer productivity, code quality, and maintainability.  If a test
is written for each particular aspect of the program, then it will be trivial to
pinpoint where the code fails.  This speeds debugging.  In addition to this, it
becomes harder to clobber existing code when adding new features, because if new
code screws up old features, tests will immediately fail.  This prevents new
bugs from being introduced by new code.  When bugs are discovered and fixed, a
test can be written for that specific bug, ensuring it never appears again.
This makes sure bugs stay squashed.  Overall, it improves the quality of the
codebase, and allows your developers to introduce features faster and more
reliably, despite the time required to write tests.

On another note, is there any way we can get healthier food in the caf?  Candy
canes and sugar plums are delicious, but I fear for our developers' teeth if all
we have to eat is sugar.

Zack

3) Santa's List
===============

a.
--

Dear Santa,

I was talking with Klaus at lunch today, and he described the process of
determining naughty and nice children from your list.  Apparently for each
distinct name on the list, he goes through the entire rest of the list and
counts the occurances.  This does not have very good time efficiency.  In the
worst case, when there are no duplicates of names, Klaus must go through the
entire list (O(n)), and for each name he must go through the rest of the list,
which on average is half the length of the list (O(n)).  This makes the total
time complexity quadratic.  It may be worthwhile to use an external data
structure to reduce the time complexity of this operation.

b.
--

Dear Santa,

I was thinking about Klaus and your list, and I think there is a solution in
Java.  While iterating over the list of names, you can simply increment a key in
a Java hashmap, where the name is the key.  This will take linear time to
traverse the list, and since the hashmap is asymptotically constant, the total
time will take O(n) asymptotically.  Klaus said you mentioned something like
this earlier.

Zack

c.
--

Using an STL map, the worst-case would mean that for every entry, I would search
the map for the entry and fail, which takes O(logn) for each entry, for a total
worst-case of O(nlogn).

4) 20% Time
===========

- Magnet web:  Implements hosting websites over the bittorrent protocol, using
  magnet link URIs instead of URLs.  This would be impossible to DDOS and
  difficult to censor.  I would also implement a browser designed to fetch pages
  over bittorrent.  Site scaling would be automatic---the more people that visit
  your site, the faster it becomes.

  *Technologies:*
  - BitTorrent protocol
  - HTTP protocol

- Magnet database:  Implements a distributed database accessible via the
  bittorrent protocol, using magnet links.  It would differ from classic
  file-sharing, since the entire database would typically reside on no one
  machine, but clients would rather request the pieces needed.  The database
  would be encrypted to allow multiple users' data to be stored.  This database
  will allow magnet-websites to store user data.

  *Technologies:*
  - BitTorrent protocol
  - NoSQL databases

- Robot:  I would make a robot to sit on my desk and help me code.  It would
  blink an LED in various ways, depending on its emotions.  Based on the LEDee
  Arduino project.

  *Technologies:*
  - Arduino
  - Emotional AI
  - [LEDee](https://github.com/orangethirty/LEDee)

