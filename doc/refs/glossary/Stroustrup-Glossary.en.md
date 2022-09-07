# [Bjarne Stroustrup](https://stroustrup.com/index.html)\'s C++ Glossary

saved from <https://stroustrup.com/glossary.html>

Modified October 3, 2012

This is a glossary of C++ terms, organized alphabetically by concept.

The definitions/explanations of individual terms are necessarily very
brief. To compensate, each entry includes one or more references to [The
C++ Programming language (Special
Edition)](https://stroustrup.com/3rd.html)
([TC++PL](https://stroustrup.com/glossary.html#GTC++PL#)) where you can
find more comprehensive explanations and code examples. I use section
references, rather than page numbers, so that this glossary can be used
together with translations of my books. It is always wise to read a
whole section rather than trying to glean information from a few
semi-random sentences.

For people interested in the reasons behind the design of C++, most
entries also refer to [The Design and Evolution of
C++](https://stroustrup.com/dne.html)
([D&E](https://stroustrup.com/glossary.html#GD&E#)). Some entries
contain links other parts of my home pages, especially to my
[FAQ](https://stroustrup.com/bs_faq.html) and [C++ Style and Technique
FAQ](https://stroustrup.com/bs_faq2.html). If I find the time, I\'ll add
references to the ISO standard.

This glossary is specifically \"C++ oriented\". That is, it defines
terms in the context of C++. For example, it defines generic programming
in terms of templates and object-oriented programming in terms of
virtual functions, rather than trying to be sufficiently abstract and
general to cover all languages and all usages.

The entries are meant to be brief explanations, rather than precise
definitions.

Suggestions for improved explanations, terms to add, or anything else
that would make the glossary more useful, are most wellcome: bs at cs
dot tamu dot edu.

------------------------------------------------------------------------

## Glossary

**!=** - the [inequality
operator](https://stroustrup.com/glossary.html#Ginequality-operator);
compares [value](https://stroustrup.com/glossary.html#Gvalue)s for
inequality returning a
[bool](https://stroustrup.com/glossary.html#Gbool). TC++PL 2.3.1, 6.2,
16.3.10, 20.3.8, 22.4.3, 22.5.

**\#define** - a directive that defines a
[macro](https://stroustrup.com/glossary.html#Gmacro).

**\#include** - a mechanism for textual inclusion of one [source
file](https://stroustrup.com/glossary.html#Gsource-file) into another.
Typically used to compose a [translation
unit](https://stroustrup.com/glossary.html#Gtranslation-unit) out of a
[.c file](https://stroustrup.com/glossary.html#G.c-file) and the [header
file](https://stroustrup.com/glossary.html#Gheader-file)s it needs to
define its view if the rest of the
[program](https://stroustrup.com/glossary.html#Gprogram). TC++PL 2.7,
13, D&E 18.1.

**+=** - add-and-assign
[operator](https://stroustrup.com/glossary.html#Goperator); a+=b is
roughly equivalent to a=a+b. Often a useful operation for [user-defined
type](https://stroustrup.com/glossary.html#Guser-defined-type)s. TC++PL
6.1.1, 6.2, 11,3,2, 20.3.9, 22.5.

**.c file** - [file](https://stroustrup.com/glossary.html#Gfile)
containing
[definition](https://stroustrup.com/glossary.html#Gdefinition#)s.

**.cpp file** - see [.c
file](https://stroustrup.com/glossary.html#G.c-file)

**.cxx file** - see [.c
file](https://stroustrup.com/glossary.html#G.c-file)

**.h file** - see [header
file](https://stroustrup.com/glossary.html#Gheader-file).

**14882** - [ISO](https://stroustrup.com/glossary.html#GISO)/IEC 14882 -
Standard for the [C++](https://stroustrup.com/glossary.html#GC++)
[Programming
Language](https://stroustrup.com/glossary.html#Gprogramming-language).

**\<\<** - (1)
[iostream](https://stroustrup.com/glossary.html#Giostream)
[output](https://stroustrup.com/glossary.html#Goutput)
[operator](https://stroustrup.com/glossary.html#Goperator). TC++PL 3.4,
21.2.1, D&E 8.3.1. (2) integer left-shift operator. TC++PL 6.2.

**=** - the [assignment
operator](https://stroustrup.com/glossary.html#Gassignment-operator);
*not* an [equality
operator](https://stroustrup.com/glossary.html#Gequality-operator). =
can be used for non-[const](https://stroustrup.com/glossary.html#Gconst)
[built-in type](https://stroustrup.com/glossary.html#Gbuilt-in-type)s
(except [array](https://stroustrup.com/glossary.html#Garray)s),
[enumeration](https://stroustrup.com/glossary.html#Genumeration)s,
[string](https://stroustrup.com/glossary.html#Gstring)s,
[container](https://stroustrup.com/glossary.html#Gcontainer)s,
[iterator](https://stroustrup.com/glossary.html#Giterator)s,
[complex](https://stroustrup.com/glossary.html#Gcomplex), and
[valarray](https://stroustrup.com/glossary.html#Gvalarray). For a
[class](https://stroustrup.com/glossary.html#Gclass), = is by default
defined [member](https://stroustrup.com/glossary.html#Gmember)-wise
assignment; if necessary, the writer of a class can define it
differently. TC++PL 2.3.1, 6.2, 11.2, 16.3.4, 20.3.6, 22.4.3, 22.5, D&E
2.12.1,11.4.4.

**=0** - curious notation indicating that a
[virtual](https://stroustrup.com/glossary.html#Gvirtual)
[function](https://stroustrup.com/glossary.html#Gfunction) is a [pure
virtual
function](https://stroustrup.com/glossary.html#Gpure-virtual-function).
TC++PL 12.3. D&E 13.2.1.

**==** - the [equality
operator](https://stroustrup.com/glossary.html#Gequality-operator);
compares [value](https://stroustrup.com/glossary.html#Gvalue)s for
equality returning a [bool](https://stroustrup.com/glossary.html#Gbool).
[=](https://stroustrup.com/glossary.html#G=)= can be used for [built-in
type](https://stroustrup.com/glossary.html#Gbuilt-in-type)s,
[enumeration](https://stroustrup.com/glossary.html#Genumeration)s,
[string](https://stroustrup.com/glossary.html#Gstring)s,
[iterator](https://stroustrup.com/glossary.html#Giterator)s,
[complex](https://stroustrup.com/glossary.html#Gcomplex), and
[valarray](https://stroustrup.com/glossary.html#Gvalarray). == is not by
default defined for a
[class](https://stroustrup.com/glossary.html#Gclass), but a user can
define it for a [user-defined
type](https://stroustrup.com/glossary.html#Guser-defined-type). Note
that == doesn\'t have the naively expected meaning for [C-style
string](https://stroustrup.com/glossary.html#GC-style-string)s or
arrays. TC++PL 2.3.1, 6.2, 16.3.10, 20.3.8, 22.4.3, 22.5.

**\>\>** - (1)
[iostream](https://stroustrup.com/glossary.html#Giostream)
[input](https://stroustrup.com/glossary.html#Ginput)
[operator](https://stroustrup.com/glossary.html#Goperator). TC++PL 3.6,
21.3.2, D&E 8.3.1. (2) integer right-shift operator. TC++PL 6.2.

**abstract class** - a
[class](https://stroustrup.com/glossary.html#Gclass) defining an
[interface](https://stroustrup.com/glossary.html#Ginterface) only; used
as a [base class](https://stroustrup.com/glossary.html#Gbase-class).
Declaring a [member
function](https://stroustrup.com/glossary.html#Gmember-function) pure
[virtual](https://stroustrup.com/glossary.html#Gvirtual) makes its class
abstract and prevents creation of
[object](https://stroustrup.com/glossary.html#Gobject)s of the abstract
class. Use of abstract classes is one of the most effective ways of
minimizing the impact of changes in a
[C++](https://stroustrup.com/glossary.html#GC++)
[program](https://stroustrup.com/glossary.html#Gprogram) and for
minimizing compilation time.
[Example](https://stroustrup.com/bs_faq2.html#abstract-class). TC++PL
2.5.4, 12.4.2, D&E 13.2.

**abstract type** - see [abstract
class](https://stroustrup.com/glossary.html#Gabstract-class).

**abstraction** - the act of specifying a general
[interface](https://stroustrup.com/glossary.html#Ginterface)
[hiding](https://stroustrup.com/glossary.html#Ghiding) implementation
details. [Class](https://stroustrup.com/glossary.html#Gclass)es,
[abstract
class](https://stroustrup.com/glossary.html#Gabstract-class)es, and
[template](https://stroustrup.com/glossary.html#Gtemplate)s are the
primary abstraction mechanisms in
[C++](https://stroustrup.com/glossary.html#GC++). See also:
[encapsulation](https://stroustrup.com/glossary.html#Gencapsulation).

**access control** - access to bases and
[member](https://stroustrup.com/glossary.html#Gmember)s of a
[class](https://stroustrup.com/glossary.html#Gclass) can be controlled
by declaring them
[public](https://stroustrup.com/glossary.html#Gpublic),
[protected](https://stroustrup.com/glossary.html#Gprotected), or
[private](https://stroustrup.com/glossary.html#Gprivate). TC++PL 15.3,
D&E 2.3, 13.9.

**ACCU** - [Association of C and C++ Users](http://www.accu.org/). A
users group that among other things maintains a
[collection](https://stroustrup.com/glossary.html#Gcollection) of
professional book reviews.

**adapter** - a [class](https://stroustrup.com/glossary.html#Gclass)
that takes [argument](https://stroustrup.com/glossary.html#Gargument)s
producing a [function
object](https://stroustrup.com/glossary.html#Gfunction-object) that
performs an operation based on those arguments. A simple form of a
[higher-order
function](https://stroustrup.com/glossary.html#Ghigher-order-function).
For example,
[mem_fun()](https://stroustrup.com/glossary.html#Gmem_fun()) adapts a
[member function](https://stroustrup.com/glossary.html#Gmember-function)
for use by the standard
[algorithm](https://stroustrup.com/glossary.html#Galgorithm)s. See
also: [sequence
adapter](https://stroustrup.com/glossary.html#Gsequence-adapter). TC++PL
18.4.4.

**address** - a [memory](https://stroustrup.com/glossary.html#Gmemory)
location. TC++PL 5.1.

**aggregate** - an [array](https://stroustrup.com/glossary.html#Garray)
or a [struct](https://stroustrup.com/glossary.html#Gstruct) without a
[constructor](https://stroustrup.com/glossary.html#Gconstructor).

**algorithm** - a precise definition of a computation. The [standard
library](https://stroustrup.com/glossary.html#Gstandard-library)
provides about 60 standard algorithms, such as
[sort()](https://stroustrup.com/glossary.html#Gsort()), search(), and
copy_unique(). TC++PL 3.8, 18.

**alignment** - placing
[object](https://stroustrup.com/glossary.html#Gobject)s in
[memory](https://stroustrup.com/glossary.html#Gmemory) to suit hardware
requirements. On many machines, an object must be aligned on a
[word](https://stroustrup.com/glossary.html#Gword#) boundary for
acceptable performance.

**allocator** -[object](https://stroustrup.com/glossary.html#Gobject)
used by [standard
library](https://stroustrup.com/glossary.html#Gstandard-library)
[container](https://stroustrup.com/glossary.html#Gcontainer)s to
allocate and deallocate
[memory](https://stroustrup.com/glossary.html#Gmemory). TC++PL 19.4.

**and** - synonym for &&, the logical and
[operator](https://stroustrup.com/glossary.html#Goperator). TC++PL
C.3.1.

**ANSI** - The American national standards organization. Cooperates
closely with [ISO](https://stroustrup.com/glossary.html#GISO) over the
[C++ standard](https://stroustrup.com/glossary.html#GC++-standard).

**ANSI C** - see [C](https://stroustrup.com/glossary.html#GC).

**ANSI C++** - [C++](https://stroustrup.com/glossary.html#GC++)

**application** - a
[collection](https://stroustrup.com/glossary.html#Gcollection) of
[program](https://stroustrup.com/glossary.html#Gprogram)s seen as
serving a common purpose (usually providing a common
[interface](https://stroustrup.com/glossary.html#Ginterface) to their
users).

**argument** - a [value](https://stroustrup.com/glossary.html#Gvalue)
passed to a [function](https://stroustrup.com/glossary.html#Gfunction)
or a [template](https://stroustrup.com/glossary.html#Gtemplate). In the
case of templates, an argument is often a
[type](https://stroustrup.com/glossary.html#Gtype).

**argument passing** - The
[semantics](https://stroustrup.com/glossary.html#Gsemantics) of
[function](https://stroustrup.com/glossary.html#Gfunction) call is to
pass a copy of an
[argument](https://stroustrup.com/glossary.html#Gargument). The copy
operation is defined by the argument
[type](https://stroustrup.com/glossary.html#Gtype)\'s [copy
constructor](https://stroustrup.com/glossary.html#Gcopy-constructor) or
by binding to a
[reference](https://stroustrup.com/glossary.html#Greference#). In either
case the semantics is those of
[initialization](https://stroustrup.com/glossary.html#Ginitialization).
TC++PL 7.2.

**argument-based lookup** - lookup of a
[function](https://stroustrup.com/glossary.html#Gfunction)
[name](https://stroustrup.com/glossary.html#Gname) or
[operator](https://stroustrup.com/glossary.html#Goperator) based on the
[namespace](https://stroustrup.com/glossary.html#Gnamespace) of the
[argument](https://stroustrup.com/glossary.html#Gargument)s or operands.
Often called [Koenig
lookup](https://stroustrup.com/glossary.html#GKoenig-lookup) after
Andrew Koenig who proposed the scheme to the [standards
committee](https://stroustrup.com/glossary.html#Gstandards-committee).
TC++PL 8.2.6, 11.2.4, C.13.8.4.

**ARM** - [The Annotated C++ Reference
Manual](https://stroustrup.com/arm.html) by Margaret Ellis and [Bjarne
Stroustrup](https://stroustrup.com/glossary.html#GBjarne-Stroustrup).
The 1990 C++ reference manual with detailed
[comment](https://stroustrup.com/glossary.html#Gcomment)s about
[design](https://stroustrup.com/glossary.html#Gdesign) details and
implementation techniques. Now outdated. See also: [C++
standard](https://stroustrup.com/glossary.html#GC++-standard).

**array** - contiguous sequence of
[element](https://stroustrup.com/glossary.html#Gelement)s. An array
doesn\'t know its own size; the programmer must take care to avoid range
errors. Where possible use the [standard
library](https://stroustrup.com/glossary.html#Gstandard-library)
[vector](https://stroustrup.com/glossary.html#Gvector). TC++PL 5.2-3,
C.7.

**assignment operator** - see
[=](https://stroustrup.com/glossary.html#G=).

**AT&T Bell Labs.** - the industrial research and development labs where
[C](https://stroustrup.com/glossary.html#GC) and
[C++](https://stroustrup.com/glossary.html#GC++) were invented,
initially developed, and initially used. D&E 2.14.

**auto** - In [C](https://stroustrup.com/glossary.html#GC) and
[C++98](https://stroustrup.com/glossary.html#GC++98) a largely useless
keyword redundantly indicating
[stack](https://stroustrup.com/glossary.html#Gstack) allocation for
local [variable](https://stroustrup.com/glossary.html#Gvariable)s. In
[C++0x](https://stroustrup.com/glossary.html#GC++0x) a keyword
indicating that a variable gets its
[type](https://stroustrup.com/glossary.html#Gtype) from its initializer.
For example: [double](https://stroustrup.com/glossary.html#Gdouble) d1
[=](https://stroustrup.com/glossary.html#G=) 2; auto d2 = 3\*d1; (d2
will have type double). Primarily useful in [generic
programming](https://stroustrup.com/glossary.html#Ggeneric-programming).

**automatic garbage collection** - see [garbage
collection](https://stroustrup.com/glossary.html#Ggarbage-collection).

**auto_ptr** - [standard
library](https://stroustrup.com/glossary.html#Gstandard-library) [class
template](https://stroustrup.com/glossary.html#Gclass-template) for
representing ownership of an
[object](https://stroustrup.com/glossary.html#Gobject) in a way that
guarantees proper release
([delete](https://stroustrup.com/glossary.html#Gdelete)) even when an
[exception](https://stroustrup.com/glossary.html#Gexception) is thrown.
See also: [resource
management](https://stroustrup.com/glossary.html#Gresource-management),
[resource acquisition is
initialization](https://stroustrup.com/glossary.html#Gresource-acquisition-is-initialization).
TC++PL 14.4.2.

**back-end** - the parts of a
[compiler](https://stroustrup.com/glossary.html#Gcompiler) that
generates code given an internal representation of a correct
[program](https://stroustrup.com/glossary.html#Gprogram). This
representation is produced by a compiler
[front-end](https://stroustrup.com/glossary.html#Gfront-end). See also:
front-end.

**backslash** - see [escape
character](https://stroustrup.com/glossary.html#Gescape-character).

**back_inserter()** - returns an
[iterator](https://stroustrup.com/glossary.html#Giterator) that can be
used to add [element](https://stroustrup.com/glossary.html#Gelement)s at
the back of a
[container](https://stroustrup.com/glossary.html#Gcontainer). TC++PL
19.2.4.

**bad_alloc** - standard
[exception](https://stroustrup.com/glossary.html#Gexception) thrown by
[new](https://stroustrup.com/glossary.html#Gnew#) in case of failure to
allocate [free store](https://stroustrup.com/glossary.html#Gfree-store).
TC++PL 6.2.6.2, 19.4.5.

**bad_cast** - standard
[exception](https://stroustrup.com/glossary.html#Gexception) thrown if a
[dynamic_cast](https://stroustrup.com/glossary.html#Gdynamic_cast) to a
[reference](https://stroustrup.com/glossary.html#Greference#) fails.
TC++PL 15.4.1.1, D&E 14.2.2.

**base class** - a [class](https://stroustrup.com/glossary.html#Gclass)
from which another is derived. TC++PL 2.6.2, 12, 15, D&E 2.9.

**base initializer** - initializer for a [base
class](https://stroustrup.com/glossary.html#Gbase-class) specified in
the [constructor](https://stroustrup.com/glossary.html#Gconstructor) for
a [derived class](https://stroustrup.com/glossary.html#Gderived-class).
TC++PL 12.2.2, 15.2.4.1, D&E 12.9.

**basic guarantee** - the guarantee that basic
[invariant](https://stroustrup.com/glossary.html#Ginvariant)s are
maintained if an
[exception](https://stroustrup.com/glossary.html#Gexception) is thrown
and that no [resource](https://stroustrup.com/glossary.html#Gresource)s
are leaked/lost. Provided by all [standard
library](https://stroustrup.com/glossary.html#Gstandard-library)
operations. See also [exception
safety](https://stroustrup.com/glossary.html#Gexception-safety),
[nothrow
guarantee](https://stroustrup.com/glossary.html#Gnothrow-guarantee), and
[strong
guarantee](https://stroustrup.com/glossary.html#Gstrong-guarantee).
TC++PL E.2.

**basic_string** - general standard-library
[string](https://stroustrup.com/glossary.html#Gstring)
[template](https://stroustrup.com/glossary.html#Gtemplate) parameterized
by [character
type](https://stroustrup.com/glossary.html#Gcharacter-type). See also:
string, [C-style
string](https://stroustrup.com/glossary.html#GC-style-string). TC++PL
20.3.

**BCPL** - ancestor to [C](https://stroustrup.com/glossary.html#GC) and
[C++](https://stroustrup.com/glossary.html#GC++) designed and
implemented by Martin Richards. TC++PL 1.4, D&E 1.1, 3.1.

**Bell labs** - see [AT&T Bell
Labs.](https://stroustrup.com/glossary.html#GAT&T-Bell-Labs.)

**binary operator** - an
[operator](https://stroustrup.com/glossary.html#Goperator) taking two
operands, such as /, &&, and binary \*.

**binder** - a
[function](https://stroustrup.com/glossary.html#Gfunction) taking a
function and a [value](https://stroustrup.com/glossary.html#Gvalue),
returning a [function
object](https://stroustrup.com/glossary.html#Gfunction-object); when
called, that function object will invoke the function with the value as
an [argument](https://stroustrup.com/glossary.html#Gargument) in
addition to other arguments supplied in the call. The [standard
library](https://stroustrup.com/glossary.html#Gstandard-library)
provides bind1st() and bind2nd() for binding the first and second
argument of a binary function, respectively. TC++PL 18.4.4.

**bit** - a unit of
[memory](https://stroustrup.com/glossary.html#Gmemory) that can hold 0
or 1. An individual bit cannot be directly accessed in
[C++](https://stroustrup.com/glossary.html#GC++) (the unit of addressing
is a [byte](https://stroustrup.com/glossary.html#Gbyte)), but a bit can
be accessed through a
[bitfield](https://stroustrup.com/glossary.html#Gbitfield) or by using
the bitwise logical
[operator](https://stroustrup.com/glossary.html#Goperator)s & and \|.
TC++PL 6.2.4.

**bitand** - synonym for &, the bitwise and
[operator](https://stroustrup.com/glossary.html#Goperator). TC++PL
C.3.1.

**bitfield** - a number of
[bit](https://stroustrup.com/glossary.html#Gbit)s in a
[word](https://stroustrup.com/glossary.html#Gword#) made accessible as a
[struct](https://stroustrup.com/glossary.html#Gstruct)
[member](https://stroustrup.com/glossary.html#Gmember). TC++PL C.8.1

**bitor** - synonym for \|, the bitwise or
[operator](https://stroustrup.com/glossary.html#Goperator) TC++PL C.3.1.

**bitset** - a [standard
library](https://stroustrup.com/glossary.html#Gstandard-library)
\"almost [container](https://stroustrup.com/glossary.html#Gcontainer)\"
holding N [bit](https://stroustrup.com/glossary.html#Gbit)s and
providing logical operations on those. TC++PL 17.5.3.

**Bjarne Stroustrup** - the designer and original implementor of
[C++](https://stroustrup.com/glossary.html#GC++). The author of this
[glossary](https://stroustrup.com/glossary.html#Gglossary). See also:
[my home page](https://stroustrup.com/homepage.html).

**block** - see [compound
statement](https://stroustrup.com/glossary.html#Gcompound-statement).
See also: [try-block](https://stroustrup.com/glossary.html#Gtry-block).

**block comment**
-[comment](https://stroustrup.com/glossary.html#Gcomment) started by /\*
and terminated by \*/. TC++PL 6.4, D&E 3.11.1.

**bool** - the built-in Boolean
[type](https://stroustrup.com/glossary.html#Gtype). A bool can have the
[value](https://stroustrup.com/glossary.html#Gvalue)s
[true](https://stroustrup.com/glossary.html#Gtrue) and
[false](https://stroustrup.com/glossary.html#Gfalse). TC++PL 4.2, D&E
11.7.2.

**boost.org** - a
[collection](https://stroustrup.com/glossary.html#Gcollection) of people
- many with ties to the [C++
standard](https://stroustrup.com/glossary.html#GC++-standard)s committee
- devoted to creating a body of quality - peer reviewed - open source
libraries designed to interoperate with the [standard
library](https://stroustrup.com/glossary.html#Gstandard-library). Their
central \"home\" is [their website](http://www.boost.org/).

**Borland C++ Builder** - Borland\'s implementation of
[C++](https://stroustrup.com/glossary.html#GC++) together with
proprietary libraries for Windows programming in an
[IDE](https://stroustrup.com/glossary.html#GIDE).

**bug** - colloquial term for error.

**built-in type** - A [type](https://stroustrup.com/glossary.html#Gtype)
provided directly by [C++](https://stroustrup.com/glossary.html#GC++),
such as [int](https://stroustrup.com/glossary.html#Gint),
[double](https://stroustrup.com/glossary.html#Gdouble), and
[char\*](https://stroustrup.com/glossary.html#Gchar*). See also:
[integral type](https://stroustrup.com/glossary.html#Gintegral-type)s,
[floating-point
type](https://stroustrup.com/glossary.html#Gfloating-point-type),
[pointer](https://stroustrup.com/glossary.html#Gpointer),
[reference](https://stroustrup.com/glossary.html#Greference#). TC++PL
4.1.1, 5.1, 5.2, 5.5, D&E 4.4, 15.11.3.

**byte** - a unit of
[memory](https://stroustrup.com/glossary.html#Gmemory) that can hold a
character of the [C++](https://stroustrup.com/glossary.html#GC++)
representation [character
set](https://stroustrup.com/glossary.html#Gcharacter-set). The smallest
unit of memory that can be directly addressed in C++. Usually, a byte is
8 [bit](https://stroustrup.com/glossary.html#Gbit)s. TC++PL 4.6.

**C** - [programming
language](https://stroustrup.com/glossary.html#Gprogramming-language)
designed and originally implemented by Dennis
[Ritchie](https://stroustrup.com/glossary.html#GRitchie).
[C++](https://stroustrup.com/glossary.html#GC++) is based on C and
maintains a high degree of [compatibility with
C](https://stroustrup.com/bs_faq.html#C-is-subset). See also: [K&R
C](https://stroustrup.com/glossary.html#GK&R-C),
[C89](https://stroustrup.com/glossary.html#GC89),
[C99](https://stroustrup.com/glossary.html#GC99), [ANSI
C](https://stroustrup.com/glossary.html#GANSI-C). TC++PL B, D&E 3.12.

**C standard library** - the library defined for
[C](https://stroustrup.com/glossary.html#GC) in the C standard.
Inherited by [C++](https://stroustrup.com/glossary.html#GC++). Most C
[standard
library](https://stroustrup.com/glossary.html#Gstandard-library)
[function](https://stroustrup.com/glossary.html#Gfunction)s have safer
and more convenient alternatived in the [C++
standard](https://stroustrup.com/glossary.html#GC++-standard) library.
See also: [algorithm](https://stroustrup.com/glossary.html#Galgorithm),
[container](https://stroustrup.com/glossary.html#Gcontainer), [stream
I/O](https://stroustrup.com/glossary.html#Gstream-I/O),
[string](https://stroustrup.com/glossary.html#Gstring),
[locale](https://stroustrup.com/glossary.html#Glocale).

**C++** - a [general-purpose programming
language](https://stroustrup.com/glossary.html#Ggeneral-purpose-programming-language)
with a bias towards systems programming that supports [procedural
programming](https://stroustrup.com/glossary.html#Gprocedural-programming),
[data
abstraction](https://stroustrup.com/glossary.html#Gdata-abstraction),
[object-oriented
programming](https://stroustrup.com/glossary.html#Gobject-oriented-programming),
and [generic
programming](https://stroustrup.com/glossary.html#Ggeneric-programming).
[C](https://stroustrup.com/glossary.html#GC)++ was designed and
originally implemented by [Bjarne
Stroustrup](https://stroustrup.com/glossary.html#GBjarne-Stroustrup).
C++ is defined by [ISO](https://stroustrup.com/glossary.html#GISO)/IEC
[14882](https://stroustrup.com/glossary.html#G14882) - Standard for the
C++ Programming Language.
[TC++PL](https://stroustrup.com/glossary.html#GTC++PL#) describes C++
and the fundamental techniques for its use. A description of the design
considerations for C++ can be found in
[D&E](https://stroustrup.com/glossary.html#GD&E#). Many commercial and
[free implementations](https://stroustrup.com/bs_faq.html#free) exist.
TC++PL 1.3,-5, 2.1, D&E 0.

**C++ standard** - the definition of
[C++](https://stroustrup.com/glossary.html#GC++) provided by
[ISO](https://stroustrup.com/glossary.html#GISO). Available from
[ANSI](https://stroustrup.com/glossary.html#GANSI); see [my C++
page](https://stroustrup.com/C++.html). TC++PL 1.4, B.1. D&E 6.1.

**C++ standards committees** - the
[ISO](https://stroustrup.com/glossary.html#GISO) committee for
[C++](https://stroustrup.com/glossary.html#GC++)
([WG21](http://anubis.dkuug.dk/jtc1/sc22/wg21/)) and the various
national standards committees that closely cooperate with it (BIS,
AFNOR, DIN, etc.). [Did the ANSI/ISO standards committee spoil
C++?](https://stroustrup.com/bs_faq.html#spoil-C++). See also: [C++
Standard](https://stroustrup.com/glossary.html#GC++-standard). D&E 6.2.

**C++ standards process** - see [C++ standards
committees](https://stroustrup.com/glossary.html#GC++-standards-committees)

**C++/CLI** - A set of Microsoft
[extension](https://stroustrup.com/glossary.html#Gextension)s to
[C++](https://stroustrup.com/glossary.html#GC++) for use with their .Net
system. See [FAQ comments](https://stroustrup.com/bs_faq.html#CppCLI).

**C++03** - [name](https://stroustrup.com/glossary.html#Gname) for the
minor revision of the [C++
standard](https://stroustrup.com/glossary.html#GC++-standard)
represented by the 2003 corrigenda (\"a
[bug](https://stroustrup.com/glossary.html#Gbug) fix release\").

**C++0x** - the upcoming revision of the [ISO
C++](https://stroustrup.com/glossary.html#GISO-C++) standard; \'x\' is
scheduled to be \'9\'. See [my publicatons
page](https://stroustrup.com/C++.html).

**C++98** - the [ISO C++](https://stroustrup.com/glossary.html#GISO-C++)
standard. See [my C++ page](https://stroustrup.com/C++.html).

**C-style cast** - dangerous form of [explicit type
conversion](https://stroustrup.com/glossary.html#Gexplicit-type-conversion);
prefer [new-style
cast](https://stroustrup.com/glossary.html#Gnew-style-cast) if you must
use explicit type conversion. TC++PL 6.2.7, D&E 14.3.5.1.

**C-style string**
-[zero](https://stroustrup.com/glossary.html#Gzero)-terminated
[array](https://stroustrup.com/glossary.html#Garray) of characters,
supported by [C standard
library](https://stroustrup.com/glossary.html#GC-standard-library)
[function](https://stroustrup.com/glossary.html#Gfunction)s. A low-level
and error-prone mechanism; where possible prefer
[string](https://stroustrup.com/glossary.html#Gstring)s. TC++PL 3.5.1,
20.3.7, 20.4.

**C/C++** - (1) an abbreviation used when discussing similarities,
differences, and
[compatibility](https://stroustrup.com/glossary.html#Gcompatibility)
issues of [C](https://stroustrup.com/glossary.html#GC) and
[C++](https://stroustrup.com/glossary.html#GC++). (2) a mythical
language referred to by people who cannot or do not want to recognize
the magnitude of differences between the facilities offered by C and C++
or the significant differences in the programming styles supported by
the two language. See also: [multi-paradigm
programming](https://stroustrup.com/glossary.html#Gmulti-paradigm-programming),
[object-oriented
programming](https://stroustrup.com/glossary.html#Gobject-oriented-programming),
[generic
programming](https://stroustrup.com/glossary.html#Ggeneric-programming),
[exception](https://stroustrup.com/glossary.html#Gexception),
[template](https://stroustrup.com/glossary.html#Gtemplate),
[user-defined
type](https://stroustrup.com/glossary.html#Guser-defined-type), [C++
standard](https://stroustrup.com/glossary.html#GC++-standard) library.

**C/C++ compatibility**
-[C++](https://stroustrup.com/glossary.html#GC++) was designed to be as
compatible as possible to C, but no more. This basically means as
compatible as can be without compromising C++\'s level of [type
safety](https://stroustrup.com/glossary.html#Gtype-safety). You can
download Appendix B of
[TC++PL](https://stroustrup.com/glossary.html#GTC++PL#),.
[Compatibility](https://stroustrup.com/3rd_compat.pdf), which describes
incompatibilities and differences in facilities offered by C and C++.
TC++PL B. D&E 2.7, 3.12, 4.5.

**C89** - The 1989 [ANSI](https://stroustrup.com/glossary.html#GANSI)
standard for [C](https://stroustrup.com/glossary.html#GC) based on [K&R
C](https://stroustrup.com/glossary.html#GK&R-C) with a few additions
borrowed from [C++](https://stroustrup.com/glossary.html#GC++), such as
[function
prototype](https://stroustrup.com/glossary.html#Gfunction-prototype)s
and [const](https://stroustrup.com/glossary.html#Gconst). See also: K&R
C, [C99](https://stroustrup.com/glossary.html#GC99).

**C99** - The 1999 [ISO](https://stroustrup.com/glossary.html#GISO)
standard for [C](https://stroustrup.com/glossary.html#GC) based on
[C89](https://stroustrup.com/glossary.html#GC89) with additions to
support Fortran-style numeric computation. It also borrows a few more
features, such as [line
comment](https://stroustrup.com/glossary.html#Gline-comment)s (//
comments) and
[declaration](https://stroustrup.com/glossary.html#Gdeclaration)s as
[statement](https://stroustrup.com/glossary.html#Gstatement)s, from
[C++](https://stroustrup.com/glossary.html#GC++).

**call-by-reference** - declaring a [function
argument](https://stroustrup.com/glossary.html#Gfunction-argument)
[type](https://stroustrup.com/glossary.html#Gtype) to be a
[reference](https://stroustrup.com/glossary.html#Greference#), thus
passing a reference rather than a
[value](https://stroustrup.com/glossary.html#Gvalue) to the called
function. See Also:
[call-by-value](https://stroustrup.com/glossary.html#Gcall-by-value).
TC++PL 5.5, D&E 3.7.

**call-by-value** - passing a copy of an
[argument](https://stroustrup.com/glossary.html#Gargument) to the called
[function](https://stroustrup.com/glossary.html#Gfunction). The
[semantics](https://stroustrup.com/glossary.html#Gsemantics) of function
call is to pass a copy of an argument. The copy operation is defined by
the argument [type](https://stroustrup.com/glossary.html#Gtype)\'s [copy
constructor](https://stroustrup.com/glossary.html#Gcopy-constructor).
See Also:
[call-by-reference](https://stroustrup.com/glossary.html#Gcall-by-reference).
TC++PL 7.2.

**cast** - [operator](https://stroustrup.com/glossary.html#Goperator)
for [explicit type
conversion](https://stroustrup.com/glossary.html#Gexplicit-type-conversion);
most often best avoided. See also
[dynamic_cast](https://stroustrup.com/glossary.html#Gdynamic_cast),
[C-style cast](https://stroustrup.com/glossary.html#GC-style-cast),
[new-style cast](https://stroustrup.com/glossary.html#Gnew-style-cast).
TC++PL 6.2.7, D&E 7.2, 14.2.2.1.

**catch** - keyword used to introduce a
[catch-clause](https://stroustrup.com/glossary.html#Gcatch-clause).

**catch(\...)** - [catch](https://stroustrup.com/glossary.html#Gcatch)
every [exception](https://stroustrup.com/glossary.html#Gexception).
TC++PL 14.3.2, D&E 16.5.

**catch-clause** - a part of a
[try-block](https://stroustrup.com/glossary.html#Gtry-block) that
[handle](https://stroustrup.com/glossary.html#Ghandle)s
[exception](https://stroustrup.com/glossary.html#Gexception)s of a
specified [type](https://stroustrup.com/glossary.html#Gtype). Also
called a [handler](https://stroustrup.com/glossary.html#Ghandler) or an
[exception
handler](https://stroustrup.com/glossary.html#Gexception-handler).
TC++PL 8.3.1, 14.3, D&E 16.3-4.

**cerr** - standard unbuffered
[ostream](https://stroustrup.com/glossary.html#Gostream) for error or
diagnostic [output](https://stroustrup.com/glossary.html#Goutput).
TC++PL 21.2.1.

**Cfront** - the
[front-end](https://stroustrup.com/glossary.html#Gfront-end) of [Bjarne
Stroustrup](https://stroustrup.com/glossary.html#GBjarne-Stroustrup)\'s
original [C++](https://stroustrup.com/glossary.html#GC++)
[compiler](https://stroustrup.com/glossary.html#Gcompiler). D&E 3.3.

**char** - [character
type](https://stroustrup.com/glossary.html#Gcharacter-type); typically
an 8-[bit](https://stroustrup.com/glossary.html#Gbit)
[byte](https://stroustrup.com/glossary.html#Gbyte). See also:
[wchar_t](https://stroustrup.com/glossary.html#Gwchar_t). TC++PL 4.3,
C.3.4.

**char\*** - [pointer](https://stroustrup.com/glossary.html#Gpointer) to
a [char](https://stroustrup.com/glossary.html#Gchar) or an
[array](https://stroustrup.com/glossary.html#Garray) of char. Typically
assumed to point to a [C-style
string](https://stroustrup.com/glossary.html#GC-style-string). Prefer a
[standard
library](https://stroustrup.com/glossary.html#Gstandard-library) string
over a C-style string when you can. TC++PL 2.3.3, 13.5.2.

**character set** - a set of integer
[value](https://stroustrup.com/glossary.html#Gvalue)s with a mapping to
character representations; for example, ASCII
([ANSI](https://stroustrup.com/glossary.html#GANSI)13.4-1968) gives
meaning to the values 0-127. ASCII is
[C++](https://stroustrup.com/glossary.html#GC++)\'s representation
character set, the character set used to represent
[program](https://stroustrup.com/glossary.html#Gprogram) source text.
TC++PL C.3. D&E 6.5.3.

**character type** -[char](https://stroustrup.com/glossary.html#Gchar),
unsigned char, and signed char. These are three distinct
[type](https://stroustrup.com/glossary.html#Gtype)s. See also:
[wchar_t](https://stroustrup.com/glossary.html#Gwchar_t). TC++PL 2.3.1,
4.3, C.3.4.

**cin** - standard
[istream](https://stroustrup.com/glossary.html#Gistream). TC++PL 3.6,
21.3.1 D&E 8.3.1.

**class** - a [user-defined
type](https://stroustrup.com/glossary.html#Guser-defined-type). A class
can have [member
function](https://stroustrup.com/glossary.html#Gmember-function)s,
[member data](https://stroustrup.com/glossary.html#Gmember-data),
[member
constant](https://stroustrup.com/glossary.html#Gmember-constant)s, and
[member type](https://stroustrup.com/glossary.html#Gmember-type)s. A
class is thee primary mechanism for representing
[concept](https://stroustrup.com/glossary.html#Gconcept)s in
[C++](https://stroustrup.com/glossary.html#GC++). See also: [template
class](https://stroustrup.com/glossary.html#Gtemplate-class). TC++PL
2.5.2, 10, D&E 2.3.

**class hierarchy** - a
[collection](https://stroustrup.com/glossary.html#Gcollection) of
[class](https://stroustrup.com/glossary.html#Gclass)es organized into a
directed acyclic graph (DAG) by derived/base relationships. TC++PL
2.6.2, 12, 15, D&E 1.1, 7.2, 8.2.3.

**class template** - see [template
class](https://stroustrup.com/glossary.html#Gtemplate-class).

**Classic C** - see [K&R
C](https://stroustrup.com/glossary.html#GK&R-C).

**clone** - a [function](https://stroustrup.com/glossary.html#Gfunction)
that makes a copy of an
[object](https://stroustrup.com/glossary.html#Gobject); usually a clone
function relies on run-time information (e.g. a
[virtual](https://stroustrup.com/glossary.html#Gvirtual) function call)
to correctly copy an object given only a
[pointer](https://stroustrup.com/glossary.html#Gpointer) or reference to
a sub-object.

**closure** - [object](https://stroustrup.com/glossary.html#Gobject)
representing a context. [C++](https://stroustrup.com/glossary.html#GC++)
does not have general closures, but [function
object](https://stroustrup.com/glossary.html#Gfunction-object)s can be
efficiently used to hold specific parts of a context relevant to a
computation. TC++PL 22.4.7, 18.4.

**co-variant return type** - see [return type
relaxation](https://stroustrup.com/glossary.html#Greturn-type-relaxation).

**code generator** - the part of a
[compiler](https://stroustrup.com/glossary.html#Gcompiler) that takes
the [output](https://stroustrup.com/glossary.html#Goutput) from the
[front-end](https://stroustrup.com/glossary.html#Gfront-end) and
generates code from it. See also:
[back-end](https://stroustrup.com/glossary.html#Gback-end),
[optimizer](https://stroustrup.com/glossary.html#Goptimizer).

**collection** - a term sometimes used as a synonym for
[container](https://stroustrup.com/glossary.html#Gcontainer).

**Comeau C++** - a family of ports of the [EDG C++
front-end](https://stroustrup.com/glossary.html#GEDG-C++-front-end).

**comment** - [block
comment](https://stroustrup.com/glossary.html#Gblock-comment) /\* \...
\*/ or [line
comment](https://stroustrup.com/glossary.html#Gline-comment) // \...

**compatibility** - see [C/C++
compatibility](https://stroustrup.com/glossary.html#GC/C++-compatibility).

**compiler** - the part of a
[C++](https://stroustrup.com/glossary.html#GC++) implementation that
produces [object
code](https://stroustrup.com/glossary.html#Gobject-code) from a
[translation
unit](https://stroustrup.com/glossary.html#Gtranslation-unit). See also:
[front-end](https://stroustrup.com/glossary.html#Gfront-end),
[back-end](https://stroustrup.com/glossary.html#Gback-end).

**complex** - [standard
library](https://stroustrup.com/glossary.html#Gstandard-library) complex
number [template](https://stroustrup.com/glossary.html#Gtemplate)
parameterized by scalar
[type](https://stroustrup.com/glossary.html#Gtype). TC++PL 11.3, 22.5,
D&E 3.6.1, 8.5, 15.10.2.1.

**compound statement** - sequence of
[statement](https://stroustrup.com/glossary.html#Gstatement)s enclosed
in curly braces: { \... } See also:
[try-block](https://stroustrup.com/glossary.html#Gtry-block). TC++PL
2.3, 6.3.

**concept** - a [C++](https://stroustrup.com/glossary.html#GC++)
language construct, providing
[type](https://stroustrup.com/glossary.html#Gtype) chaecking for
[template
argument](https://stroustrup.com/glossary.html#Gtemplate-argument)s.

**concept checking** - see
[constraint](https://stroustrup.com/glossary.html#Gconstraint).

**concrete type** - a [type](https://stroustrup.com/glossary.html#Gtype)
without [virtual](https://stroustrup.com/glossary.html#Gvirtual)
[function](https://stroustrup.com/glossary.html#Gfunction)s, so that
[object](https://stroustrup.com/glossary.html#Gobject)s of the type can
be allocated on the [stack](https://stroustrup.com/glossary.html#Gstack)
and manipulated directly (without a need to use
[pointer](https://stroustrup.com/glossary.html#Gpointer)s or references
to allow the possibility for derived
[class](https://stroustrup.com/glossary.html#Gclass)es). Often, small
self-contained classes. See also [abstract
class](https://stroustrup.com/glossary.html#Gabstract-class),
[vector](https://stroustrup.com/glossary.html#Gvector),
[list](https://stroustrup.com/glossary.html#Glist#),
[string](https://stroustrup.com/glossary.html#Gstring),
[complex](https://stroustrup.com/glossary.html#Gcomplex). TC++PL 25.2.

**const** - attribute of a
[declaration](https://stroustrup.com/glossary.html#Gdeclaration) that
makes the entity to which it refers readonly. See also: [const member
function](https://stroustrup.com/glossary.html#Gconst-member-function).
TC++PL 5.4, D&E 3.8.

**const definition**
-[declaration](https://stroustrup.com/glossary.html#Gdeclaration) of a
[const](https://stroustrup.com/glossary.html#Gconst) including an
initializer.

**const member function** - [member
function](https://stroustrup.com/glossary.html#Gmember-function)
declared not to modify the state of the
[object](https://stroustrup.com/glossary.html#Gobject) for which it is
called. Can be called for
[const](https://stroustrup.com/glossary.html#Gconst) objects only.
TC++PL 10.2.6, D&E 13.3.

**constant** -[literal](https://stroustrup.com/glossary.html#Gliteral),
[object](https://stroustrup.com/glossary.html#Gobject) or
[value](https://stroustrup.com/glossary.html#Gvalue) declared
[const](https://stroustrup.com/glossary.html#Gconst), or
[enumerator](https://stroustrup.com/glossary.html#Genumerator).

**constant expression**
-[expression](https://stroustrup.com/glossary.html#Gexpression) of
[integral type](https://stroustrup.com/glossary.html#Gintegral-type)
that is evaluated at compile time. TC++PL C.5.

**constraint** - rule that restricts the set of acceptable
[argument](https://stroustrup.com/glossary.html#Gargument)s for a
[template](https://stroustrup.com/glossary.html#Gtemplate)
[parameter](https://stroustrup.com/glossary.html#Gparameter). For
example \"the argument must have + and
-[operator](https://stroustrup.com/glossary.html#Goperator)s\".
[Examples](https://stroustrup.com/bs_faq2.html#constraints). D&E 15.4.

**constructor** - [member
function](https://stroustrup.com/glossary.html#Gmember-function) with
the same [name](https://stroustrup.com/glossary.html#Gname) as its
[class](https://stroustrup.com/glossary.html#Gclass), used to initialize
[object](https://stroustrup.com/glossary.html#Gobject)s of its class.
Often used to establish an
[invariant](https://stroustrup.com/glossary.html#Ginvariant) for the
class. Often used to acquire
[resource](https://stroustrup.com/glossary.html#Gresource)s. A
constructor establishes a local environment in which member functions
execute. See also: [order of
construction](https://stroustrup.com/glossary.html#Gorder-of-construction),
[destructor](https://stroustrup.com/glossary.html#Gdestructor). TC++PL
10.2.3, D&E 2.11.1.

**const_cast** - a [type
conversion](https://stroustrup.com/glossary.html#Gtype-conversion)
operation that conversion between types that differ in
[const](https://stroustrup.com/glossary.html#Gconst) and
[volatile](https://stroustrup.com/glossary.html#Gvolatile) type
modifiers only. See also:
[cast](https://stroustrup.com/glossary.html#Gcast). TC++PL 15.4.2.1, D&E
14.3.4.

**container** - (1)
[object](https://stroustrup.com/glossary.html#Gobject) that holds other
objects. (2) [type](https://stroustrup.com/glossary.html#Gtype) of
object that holds other objects. (3)
[template](https://stroustrup.com/glossary.html#Gtemplate) that
generates types of objects that hold other objects. (4) [standard
library](https://stroustrup.com/glossary.html#Gstandard-library)
template such as [vector](https://stroustrup.com/glossary.html#Gvector),
[list](https://stroustrup.com/glossary.html#Glist#), and
[map](https://stroustrup.com/glossary.html#Gmap). TC++PL 16.2, 16.2.3,
17, D&E 15.3.

**controlled variable** - a
[variable](https://stroustrup.com/glossary.html#Gvariable) used to
express the part of the exit condition of a
[loop](https://stroustrup.com/glossary.html#Gloop) that varies each time
around the loop. For example \`[i\'\' in for (\`int
\<https://stroustrup.com/glossary.html\#Gint\>]{.title-ref}\_\_ i=0;
i\<max; ++i) f(i);

**conversion** - [explicit type
conversion](https://stroustrup.com/glossary.html#Gexplicit-type-conversion)
or [implicit type
conversion](https://stroustrup.com/glossary.html#Gimplicit-type-conversion).
See also: [user-defined type
conversion](https://stroustrup.com/glossary.html#Guser-defined-type-conversion).

**conversion operator** - [operator
function](https://stroustrup.com/glossary.html#Goperator-function)
specifying a
[conversion](https://stroustrup.com/glossary.html#Gconversion) from a
[user-defined
type](https://stroustrup.com/glossary.html#Guser-defined-type) to either
another user-defined type or a [built-in
type](https://stroustrup.com/glossary.html#Gbuilt-in-type). Note that
[constructor](https://stroustrup.com/glossary.html#Gconstructor)s cannot
define conversions to built-in types. TC++PL 11.4, D&E 3.6.3.

**copy assignment** - an assignment accepting an
[object](https://stroustrup.com/glossary.html#Gobject) of the
[class](https://stroustrup.com/glossary.html#Gclass) itself as its
[argument](https://stroustrup.com/glossary.html#Gargument), typically
Z::[operator](https://stroustrup.com/glossary.html#Goperator)=([const](https://stroustrup.com/glossary.html#Gconst)
Z&). A copy assignment is used for assignment of an object of
[type](https://stroustrup.com/glossary.html#Gtype) T with an object of
type T. If a copy assignment is not declared for a class, [memberwise
copy](https://stroustrup.com/glossary.html#Gmemberwise-copy) is used.
See also: [copy
constructor](https://stroustrup.com/glossary.html#Gcopy-constructor).
TC++PL 10.4.4.1, 10.4.6.3 D&E 11.4.

**copy constructor** - a
[constructor](https://stroustrup.com/glossary.html#Gconstructor)
accepting an [object](https://stroustrup.com/glossary.html#Gobject) of
the [class](https://stroustrup.com/glossary.html#Gclass) itself as its
[argument](https://stroustrup.com/glossary.html#Gargument), typically
Z::Z(const Z&). A copy constructor is used for
[initialization](https://stroustrup.com/glossary.html#Ginitialization)
of objects of [type](https://stroustrup.com/glossary.html#Gtype) T with
objects of type T. If a copy constructor is not declared for a class,
memberwise initialization is used. See also:
[call-by-value](https://stroustrup.com/glossary.html#Gcall-by-value),
[argument
passing](https://stroustrup.com/glossary.html#Gargument-passing), [value
return](https://stroustrup.com/glossary.html#Gvalue-return), [copy
assignment](https://stroustrup.com/glossary.html#Gcopy-assignment).
TC++PL 10.4.4.1, 10.4.6.3, D&E 11.4.

**copy()** - standard
[algorithm](https://stroustrup.com/glossary.html#Galgorithm) for copying
one sequence into another. The two sequences need not be of the same
[type](https://stroustrup.com/glossary.html#Gtype). TC++PL 18.6.1.

**copying class object** - an
[object](https://stroustrup.com/glossary.html#Gobject) of a
[class](https://stroustrup.com/glossary.html#Gclass) is copied by the
class\' [copy
assignment](https://stroustrup.com/glossary.html#Gcopy-assignment) and
[copy
constructor](https://stroustrup.com/glossary.html#Gcopy-constructor)s.
The default meaning of these operations is [memberwise
copy](https://stroustrup.com/glossary.html#Gmemberwise-copy). TC++PL
10.4.4.1, 10.4.6.3 D&E 11.4.

**cout** - standard
[ostream](https://stroustrup.com/glossary.html#Gostream). TC++PL 3.4,
21.2.1, D&E 8.3.1.

**cpp** - see
[preprocessor](https://stroustrup.com/glossary.html#Gpreprocessor).

**crosscast** - a [cast](https://stroustrup.com/glossary.html#Gcast)
from a [class](https://stroustrup.com/glossary.html#Gclass) to a
[sibling class](https://stroustrup.com/glossary.html#Gsibling-class).
See also:
[dynamic_cast](https://stroustrup.com/glossary.html#Gdynamic_cast),
[upcast](https://stroustrup.com/glossary.html#Gupcast),
[downcast](https://stroustrup.com/glossary.html#Gdowncast). TC++PL 15.4.

**Currying** - producing a
[function](https://stroustrup.com/glossary.html#Gfunction) of N-M
[argument](https://stroustrup.com/glossary.html#Gargument)s by
specifying M arguments for a function of N arguments. See also:
[binder](https://stroustrup.com/glossary.html#Gbinder), [default
argument](https://stroustrup.com/glossary.html#Gdefault-argument).
TC++PL 18.4.4.1.

**D&E** - [Bjarne
Stroustrup](https://stroustrup.com/glossary.html#GBjarne-Stroustrup):
[The Design and Evolution of C++](https://stroustrup.com/dne.html).
Addison Wesley. 1994. A book describing why C++ looks the way it does
-the closest to a design rationale that we have for C++.

**data abstraction** - programming relying on [user-defined
type](https://stroustrup.com/glossary.html#Guser-defined-type)s with
well-defined
[interface](https://stroustrup.com/glossary.html#Ginterface)s. See also:
[generic
programming](https://stroustrup.com/glossary.html#Ggeneric-programming)
and [object-oriented
programming](https://stroustrup.com/glossary.html#Gobject-oriented-programming).
TC++PL 2.5, 24.2.2, D&E 9.2.1.

**data hiding** - see [information
hiding](https://stroustrup.com/glossary.html#Ginformation-hiding)

**data member** -[member](https://stroustrup.com/glossary.html#Gmember)
of a [class](https://stroustrup.com/glossary.html#Gclass) that can hold
a [value](https://stroustrup.com/glossary.html#Gvalue). A memer can be a
[static member](https://stroustrup.com/glossary.html#Gstatic-member) or
a [non-static
member](https://stroustrup.com/glossary.html#Gnon-static-member). TC++PL
2.5.2-3, 10.2, D&E 2.3, 2.5.2.

**declaration** - an introduction of a
[name](https://stroustrup.com/glossary.html#Gname) into a
[scope](https://stroustrup.com/glossary.html#Gscope). The
[type](https://stroustrup.com/glossary.html#Gtype) of the name must be
specified. If the declaration also specifies the entity to which the
name refers, the declaration is also a
[definition](https://stroustrup.com/glossary.html#Gdefinition#). TC++PL
4.9, D&E 3.11.5.

**decltype** - [C](https://stroustrup.com/glossary.html#GC)++ox
[operator](https://stroustrup.com/glossary.html#Goperator) meaning the
[type](https://stroustrup.com/glossary.html#Gtype) of its operand. For
example: [const](https://stroustrup.com/glossary.html#Gconst)
[double](https://stroustrup.com/glossary.html#Gdouble)& d1
[=](https://stroustrup.com/glossary.html#G=)2.0; decltype(d1) d2; (d2
will also be a const double&). Primarily useful for writing forwarding
[function](https://stroustrup.com/glossary.html#Gfunction)s in [generic
programming](https://stroustrup.com/glossary.html#Ggeneric-programming).

**default argument** - a
[value](https://stroustrup.com/glossary.html#Gvalue) specified for an
[argument](https://stroustrup.com/glossary.html#Gargument) in a
[function
declaration](https://stroustrup.com/glossary.html#Gfunction-declaration),
to be used if a call of the function doesn\'t specify a value for that
argument. This is commonly used to allow a simple
[interface](https://stroustrup.com/glossary.html#Ginterface) for common
uses while making it easy to use less common facilities by specifying
more arguments. See also: [default template
argument](https://stroustrup.com/glossary.html#Gdefault-template-argument),
[binder](https://stroustrup.com/glossary.html#Gbinder). TC++PL 7.5,
10.2.3, D&E 2.12.2.

**default constructor**
-[constructor](https://stroustrup.com/glossary.html#Gconstructor)
requiring no
[argument](https://stroustrup.com/glossary.html#Gargument)s. Used for
default
[initialization](https://stroustrup.com/glossary.html#Ginitialization).
TC++PL 10.4.2, 10.4.6, D&E 2.12.2, 15.11.3.

**default template argument** - a
[type](https://stroustrup.com/glossary.html#Gtype) or
[value](https://stroustrup.com/glossary.html#Gvalue) specified for an
[argument](https://stroustrup.com/glossary.html#Gargument) in a
[template](https://stroustrup.com/glossary.html#Gtemplate)
[declaration](https://stroustrup.com/glossary.html#Gdeclaration), to be
used if a use of the template doesn\'t provide a type or value for that
argument. This is commonly used to allow a simple
[interface](https://stroustrup.com/glossary.html#Ginterface) for common
uses while making it easy to use less common facilities by specifying
more arguments. See also: [default
argument](https://stroustrup.com/glossary.html#Gdefault-argument).
TC++PL 13.4.1, B.3.5.

**default value** -[value](https://stroustrup.com/glossary.html#Gvalue)
defined by a [default
constructor](https://stroustrup.com/glossary.html#Gdefault-constructor).
For [built-in
type](https://stroustrup.com/glossary.html#Gbuilt-in-type)s, the default
value is defined to be 0. TC++PL 4.9.5, 10.3.1, 10.4.2 D&E 15.11.3.

**definition** - a
[declaration](https://stroustrup.com/glossary.html#Gdeclaration) that
specifies the entity to which the declared
[name](https://stroustrup.com/glossary.html#Gname) refers. See also:
[one definition
rule](https://stroustrup.com/glossary.html#Gone-definition-rule),
[variable
definition](https://stroustrup.com/glossary.html#Gvariable-definition),
[const
definition](https://stroustrup.com/glossary.html#Gconst-definition),
[template
definition](https://stroustrup.com/glossary.html#Gtemplate-definition),
[function
definition](https://stroustrup.com/glossary.html#Gfunction-definition).
TC++PL 4.9, D&E 15.11.3.

**delayed evaluation** - technique for eliminating temporary
[value](https://stroustrup.com/glossary.html#Gvalue)s, and in general to
delay a computation until sufficient information is available to do it
well. TC++PL 21.4.6.3, 22.4.7.

**delete** - [object](https://stroustrup.com/glossary.html#Gobject)
destruction [operator](https://stroustrup.com/glossary.html#Goperator).
Invokes [destructor](https://stroustrup.com/glossary.html#Gdestructor),
if any. See also: [resource
management](https://stroustrup.com/glossary.html#Gresource-management),
[memory
management](https://stroustrup.com/glossary.html#Gmemory-management),
[garbage
collection](https://stroustrup.com/glossary.html#Ggarbage-collection),
[operator
delete()](https://stroustrup.com/glossary.html#Goperator-delete()).
TC++PL 6.2.6, D&E 2.3, 10.2.

**deprecated feature** - feature left in a [programming
language](https://stroustrup.com/glossary.html#Gprogramming-language)
for historical reasons only. The standard s committee recommends against
its use and warns that it may be removed in future revisions of the
standard.

**deque** -[double](https://stroustrup.com/glossary.html#Gdouble)-ended
[queue](https://stroustrup.com/glossary.html#Gqueue) (pronounced
\"deck\"). A [standard
library](https://stroustrup.com/glossary.html#Gstandard-library)
[template](https://stroustrup.com/glossary.html#Gtemplate) alowing
insertions and deletions at both ends. Use a
[vector](https://stroustrup.com/glossary.html#Gvector) if you need
insertions and deletions only at one end (as is typical). Use a list if
you need frequent insertions and deletions in the middle. TC++PL 17.2.3.

**derived class** - a
[class](https://stroustrup.com/glossary.html#Gclass) with one or more
[base class](https://stroustrup.com/glossary.html#Gbase-class)es TC++PL
2.6.2, 12, 15, D&E 3.5.

**design** - creating a clean and reasonably simple structure of a
system TC++PL 23.3.

**design of C++** - see
[D&E](https://stroustrup.com/glossary.html#GD&E#).

**destructor** -[member](https://stroustrup.com/glossary.html#Gmember)
of a [class](https://stroustrup.com/glossary.html#Gclass) used to clean
up before deleting an
[object](https://stroustrup.com/glossary.html#Gobject). It\'s
[name](https://stroustrup.com/glossary.html#Gname) is its class\' name
prefixed by \'\~\'. For example, Foo\'s destructor is \~Foo(). Often
used to release
[resource](https://stroustrup.com/glossary.html#Gresource)s. A
destructor is implicitly called whenever an object goes out of
[scope](https://stroustrup.com/glossary.html#Gscope) or is deleted. See
also: [virtual
destructor](https://stroustrup.com/glossary.html#Gvirtual-destructor),
[order of
destruction](https://stroustrup.com/glossary.html#Gorder-of-destruction).
TC++PL 10.4.2, D&E 2.11.1, 3.11.2.

**digraph** - alternative representation for
[C++](https://stroustrup.com/glossary.html#GC++) representation
characters that doesn\'t exist in every national [character
set](https://stroustrup.com/glossary.html#Gcharacter-set), such as {, },
\[, \], and \#: \<%, %., \<:, :\>, and %:. TC++PL C.3.1.

**double** - double-precision floating-point number. TC++PL 4.5.

**double dispatch** - a technique for selecting a
[function](https://stroustrup.com/glossary.html#Gfunction) to be invoked
on the [dynamic
type](https://stroustrup.com/glossary.html#Gdynamic-type) of two
operands. TC++PL 21.2.3.1, D&E 13.8.

**downcast** - a [cast](https://stroustrup.com/glossary.html#Gcast) from
a [base class](https://stroustrup.com/glossary.html#Gbase-class) to one
of its [derived
class](https://stroustrup.com/glossary.html#Gderived-class)es. The
[name](https://stroustrup.com/glossary.html#Gname) reflects the fact
that in programming, trees tend to be drawn growing downwards from the
roots. See also:
[dynamic_cast](https://stroustrup.com/glossary.html#Gdynamic_cast),
[upcast](https://stroustrup.com/glossary.html#Gupcast),
[crosscast](https://stroustrup.com/glossary.html#Gcrosscast). TC++PL
15.4.

**dynamic memory** - see [free
store](https://stroustrup.com/glossary.html#Gfree-store).

**dynamic type** - the
[type](https://stroustrup.com/glossary.html#Gtype) of an
[object](https://stroustrup.com/glossary.html#Gobject) as determined at
run-time; e.g. using
[dynamic_cast](https://stroustrup.com/glossary.html#Gdynamic_cast) or
typeid. Also known as [most-derived
type](https://stroustrup.com/glossary.html#Gmost-derived-type).

**dynamic type safety** - [type
safety](https://stroustrup.com/glossary.html#Gtype-safety) enforced at
run time (typically requiring a programmer to
[catch](https://stroustrup.com/glossary.html#Gcatch)
[exception](https://stroustrup.com/glossary.html#Gexception)s to deal
with violations). An example is range checking for
[vector](https://stroustrup.com/glossary.html#Gvector)s.

**dynamic_cast** - a [type
conversion](https://stroustrup.com/glossary.html#Gtype-conversion)
operation that performs safe conversions using on [run time type
information](https://stroustrup.com/glossary.html#Grun-time-type-information).
Used for navigation of a [class
hierarchy](https://stroustrup.com/glossary.html#Gclass-hierarchy). See
also: [downcast](https://stroustrup.com/glossary.html#Gdowncast),
[crosscast](https://stroustrup.com/glossary.html#Gcrosscast),
[static_cast](https://stroustrup.com/glossary.html#Gstatic_cast). TC++PL
15.4.1, D&E 14.2.2, 14.3.2.1.

**EDG C++ front-end** - a quality
[C++](https://stroustrup.com/glossary.html#GC++)
[compiler](https://stroustrup.com/glossary.html#Gcompiler)
[front-end](https://stroustrup.com/glossary.html#Gfront-end), which is
the core of several well-regarded C++ compilers.

**element** - an [object](https://stroustrup.com/glossary.html#Gobject)
in a [container](https://stroustrup.com/glossary.html#Gcontainer).

**encapsulation** - the enforcement of
[abstraction](https://stroustrup.com/glossary.html#Gabstraction) by
mechanisms that prevent access to implementation details of an
[object](https://stroustrup.com/glossary.html#Gobject) or a group of
objects except through a well-defined
[interface](https://stroustrup.com/glossary.html#Ginterface).
[C++](https://stroustrup.com/glossary.html#GC++) enforces encapsulation
of [private](https://stroustrup.com/glossary.html#Gprivate) and proteced
[member](https://stroustrup.com/glossary.html#Gmember)s of a
[class](https://stroustrup.com/glossary.html#Gclass) as long as users do
not violate the [type
system](https://stroustrup.com/glossary.html#Gtype-system) using
[cast](https://stroustrup.com/glossary.html#Gcast)s. See also: interface
and [access
control](https://stroustrup.com/glossary.html#Gaccess-control). TC++PL
15.3, 24.3.7.4, D&E 2.10.

**enum** - keyword for declaring
[enumeration](https://stroustrup.com/glossary.html#Genumeration)s.
TC++PL 4.8, D&E 11.7.

**enumeration** - a [user-defined
type](https://stroustrup.com/glossary.html#Guser-defined-type)
consisting of a set of named
[value](https://stroustrup.com/glossary.html#Gvalue)s. TC++PL 4.8, D&E
11.7.

**enumerator** - a [name](https://stroustrup.com/glossary.html#Gname)
identifying a [value](https://stroustrup.com/glossary.html#Gvalue) of an
[enumeration](https://stroustrup.com/glossary.html#Genumeration). TC++PL
4.8, D&E 11.7.

**equality operator** - see
[==](https://stroustrup.com/glossary.html#G==).

**error handling** - see [exception
handling](https://stroustrup.com/glossary.html#Gexception-handling).

**escape character** - the character \\, also called
[backslash](https://stroustrup.com/glossary.html#Gbackslash), sed an
initial character in representations of characters that cannot be
represented by a single ASCII character, such as newline (\'n\') and
horizontal tab (\'t\'). TC++PL C.3.2.

**exception** -[object](https://stroustrup.com/glossary.html#Gobject)
thrown by a
throw-[statement](https://stroustrup.com/glossary.html#Gstatement) and
(potentially) caught by an [exception
handler](https://stroustrup.com/glossary.html#Gexception-handler)
associated by a
[try-block](https://stroustrup.com/glossary.html#Gtry-block). See also:
[exception
safety](https://stroustrup.com/glossary.html#Gexception-safety),
[termination
semantics](https://stroustrup.com/glossary.html#Gtermination-semantics),
[catch](https://stroustrup.com/glossary.html#Gcatch). TC++PL 8.3, 14.2,
D&E 16.

**exception handler** - a
[catch-clause](https://stroustrup.com/glossary.html#Gcatch-clause)
associated with a
[try-block](https://stroustrup.com/glossary.html#Gtry-block) for
handling [exception](https://stroustrup.com/glossary.html#Gexception)s
of a specified [type](https://stroustrup.com/glossary.html#Gtype).
TC++PL 8.3.1, 14.3, D&E 16.3-4.

**exception handling** - the primary way of reporting an error that
cannot be handled locally. An
[exception](https://stroustrup.com/glossary.html#Gexception) is thrown
and will be caught by an [exception
handler](https://stroustrup.com/glossary.html#Gexception-handler) or
[terminate()](https://stroustrup.com/glossary.html#Gterminate()) will be
called. See also: [exception
safety](https://stroustrup.com/glossary.html#Gexception-safety),
[termination
semantics](https://stroustrup.com/glossary.html#Gtermination-semantics),
[try-block](https://stroustrup.com/glossary.html#Gtry-block), throw,
[catch](https://stroustrup.com/glossary.html#Gcatch). TC++PL 8.3, 14, E,
D&E 16.

**exception safety** - the notion that a
[program](https://stroustrup.com/glossary.html#Gprogram) is structured
so that throwing an
[exception](https://stroustrup.com/glossary.html#Gexception) doesn\'t
cause unintended side effects. See also: [basic
guarantee](https://stroustrup.com/glossary.html#Gbasic-guarantee),
[strong
guarantee](https://stroustrup.com/glossary.html#Gstrong-guarantee), and
[nothrow
guarantee](https://stroustrup.com/glossary.html#Gnothrow-guarantee). You
can download Appendix E [Standard-Library Exception
Safety](https://stroustrup.com/3rd_safe.pdf) of
[TC++PL](https://stroustrup.com/glossary.html#GTC++PL#) describing
techniques for [exception
handling](https://stroustrup.com/glossary.html#Gexception-handling).
TC++PL E.2.

**executable file** - the result of linking the [object
file](https://stroustrup.com/glossary.html#Gobject-file)s of a complete
[program](https://stroustrup.com/glossary.html#Gprogram). See also:
[compiler](https://stroustrup.com/glossary.html#Gcompiler),
[linker](https://stroustrup.com/glossary.html#Glinker).

**explicit** - keyword used to define a
[constructor](https://stroustrup.com/glossary.html#Gconstructor) so that
it isn\'t used for implicit
[conversion](https://stroustrup.com/glossary.html#Gconversion)s. TC++PL
11.7.1.

**explicit call of constructor** - See [placement
new](https://stroustrup.com/glossary.html#Gplacement-new).

**explicit call of destructor**
-[destructor](https://stroustrup.com/glossary.html#Gdestructor)s are
implicitly called when an
[object](https://stroustrup.com/glossary.html#Gobject) goes out of
[scope](https://stroustrup.com/glossary.html#Gscope) or is deleted.
However, if a user have taken over construction (using [placement
new](https://stroustrup.com/glossary.html#Gplacement-new)) and
destruction, a destructor must be explicitly called.
[Example](https://stroustrup.com/bs_faq2.html#placement-delete). For
example, explicit call of destructor is used in the implementation of
[standard
library](https://stroustrup.com/glossary.html#Gstandard-library)
[container](https://stroustrup.com/glossary.html#Gcontainer)s. See also:
placement new. TC++PL 10.4.11, E.3.1, D&E 10.5.1.

**explicit constructor**
-[constructor](https://stroustrup.com/glossary.html#Gconstructor) so
that will not be used for implicit
[conversion](https://stroustrup.com/glossary.html#Gconversion)s. TC++PL
11.7.1.

**explicit instantiation**
-[explicit](https://stroustrup.com/glossary.html#Gexplicit) request to
instantiate a [template](https://stroustrup.com/glossary.html#Gtemplate)
in a specific context. See also: [template
instantiation](https://stroustrup.com/glossary.html#Gtemplate-instantiation).
TC++PL C.13.10, D&E 15.10.1.

**explicit qualification** - (1) by
[namespace](https://stroustrup.com/glossary.html#Gnamespace) name, see
[qualified name](https://stroustrup.com/glossary.html#Gqualified-name).
(2) by [template
argument](https://stroustrup.com/glossary.html#Gtemplate-argument).
TCP++L 13.3.2.

**explicit type conversion** - [type
conversion](https://stroustrup.com/glossary.html#Gtype-conversion)
(explicitly) requested by the use of a [C-style
cast](https://stroustrup.com/glossary.html#GC-style-cast), [new-style
cast](https://stroustrup.com/glossary.html#Gnew-style-cast), or
functional notation. See also, [implicit type
conversion](https://stroustrup.com/glossary.html#Gimplicit-type-conversion),
[user-defined type
conversion](https://stroustrup.com/glossary.html#Guser-defined-type-conversion).
TC++PL 6.2.7, D&E 14.3.2.

**expression** - combination of
[operator](https://stroustrup.com/glossary.html#Goperator)s and
[name](https://stroustrup.com/glossary.html#Gname)s producing a
[value](https://stroustrup.com/glossary.html#Gvalue). TC++PL 6.2.

**extended type information** - any scheme that provides additional
information base on the standard [run time type
information](https://stroustrup.com/glossary.html#Grun-time-type-information).
TC++PL 15.4.4.1, D&E 14.2.5.2.

**extension** - see [language
extension](https://stroustrup.com/glossary.html#Glanguage-extension)

**extern** - a keyword used to indicate that the definition of an entity
being declared is defined elsewhere. Because \"extern: is only necessary
for global [variable](https://stroustrup.com/glossary.html#Gvariable)s
it is largely redundant.

**extracter** - an
[iostream](https://stroustrup.com/glossary.html#Giostream)
[\>\>](https://stroustrup.com/glossary.html#G%3E%3E) (put to) function.
TC++PL 21.2,21.3, D&E 8.3.1.

**facet** - a [class](https://stroustrup.com/glossary.html#Gclass)
representing a primitive aspect of a
[locale](https://stroustrup.com/glossary.html#Glocale), such as a way of
writing an integer or a character encoding. TC++PL D.3.

**false** - [bool](https://stroustrup.com/glossary.html#Gbool)
[value](https://stroustrup.com/glossary.html#Gvalue); converts to 0.
TC++PL 4.2, D&E 11.7.2.

**fat interface** - an
[interface](https://stroustrup.com/glossary.html#Ginterface) with more
[member
function](https://stroustrup.com/glossary.html#Gmember-function)s and
[friend](https://stroustrup.com/glossary.html#Gfriend)s than are
logically necessary. TC++PL 24.4.3.

**field** - see
[bitfield](https://stroustrup.com/glossary.html#Gbitfield).

**file** - a sequence of
[byte](https://stroustrup.com/glossary.html#Gbyte)s or words holding
information in a computer. The term \"file\" is usually reserved to
information placed on disk or elsewhere outside the main
[memory](https://stroustrup.com/glossary.html#Gmemory). The
[iostream](https://stroustrup.com/glossary.html#Giostream) part of the
[C++ standard](https://stroustrup.com/glossary.html#GC++-standard)
library provides
[ifstream](https://stroustrup.com/glossary.html#Gifstream),
[ofstream](https://stroustrup.com/glossary.html#Gofstream), and fstream
as [abstraction](https://stroustrup.com/glossary.html#Gabstraction) for
accessing files. TC++PL 21.5.

**file stream** -[stream](https://stroustrup.com/glossary.html#Gstream)
attached to a [file](https://stroustrup.com/glossary.html#Gfile). See
also, [fstream](https://stroustrup.com/glossary.html#Gfstream),
[ifstream](https://stroustrup.com/glossary.html#Gifstream),
[ofstream](https://stroustrup.com/glossary.html#Gofstream). TC++PL
21.5.1.

**finally** - a language construct supporting ad hoc cleanup in some
languages. Similar, but not identical to
[C++](https://stroustrup.com/glossary.html#GC++)\'s
[catch(\...)](https://stroustrup.com/glossary.html#Gcatch(...)). Use the
\"[resource acquisition is
initialization](https://stroustrup.com/glossary.html#Gresource-acquisition-is-initialization)\"
technique instead.

**find()** - [standard
library](https://stroustrup.com/glossary.html#Gstandard-library) linear
search [algorithm](https://stroustrup.com/glossary.html#Galgorithm) for
a [value](https://stroustrup.com/glossary.html#Gvalue) in a sequence.
TC++PL 18.5.2.

**find_if()** - [standard
library](https://stroustrup.com/glossary.html#Gstandard-library) linear
search [algorithm](https://stroustrup.com/glossary.html#Galgorithm) for
an [element](https://stroustrup.com/glossary.html#Gelement) meeting a
search criterion in a sequence. TC++PL 18.5.2.

**float** - single-precision floating-point number. TC++PL 4.5.

**floating-point literal** - the source text representation of a
floating point [value](https://stroustrup.com/glossary.html#Gvalue). For
example, 0.314e1. TC++PL 4.5.1.

**floating-point type** - a
[float](https://stroustrup.com/glossary.html#Gfloat),
[double](https://stroustrup.com/glossary.html#Gdouble), or [long
double](https://stroustrup.com/glossary.html#Glong-double). A
floating-point number is typically represented as a mantissa and an
exponent. TC++PL 4.5.

**for-statement**
-[iteration](https://stroustrup.com/glossary.html#Giteration)
[statement](https://stroustrup.com/glossary.html#Gstatement) specifying
an initializer, an iteration condition, a \"next-iteration\" operation,
and a controlled statement. TC++PL 6.3.3.

**free store** -[memory](https://stroustrup.com/glossary.html#Gmemory)
allocated by [new](https://stroustrup.com/glossary.html#Gnew#); also
called [dynamic
memory](https://stroustrup.com/glossary.html#Gdynamic-memory). Often
[standard
library](https://stroustrup.com/glossary.html#Gstandard-library)
facilities, such as
[vector](https://stroustrup.com/glossary.html#Gvector), can be used to
avoid [explicit](https://stroustrup.com/glossary.html#Gexplicit) use of
free store. TC++PL 6.2.6, 10.4.3, D&E 2.11.2, 11.4.2.

**free()** - [C](https://stroustrup.com/glossary.html#GC) standard
deallocation [function](https://stroustrup.com/glossary.html#Gfunction).
Use [delete](https://stroustrup.com/glossary.html#Gdelete) instead.

**free-standing function** - a
[function](https://stroustrup.com/glossary.html#Gfunction) that is not a
[member
function](https://stroustrup.com/glossary.html#Gmember-function). Useful
for decreasing coupling between representation and
[algorithm](https://stroustrup.com/glossary.html#Galgorithm). TC++PL 7,
18.

**friend** - a
[function](https://stroustrup.com/glossary.html#Gfunction) or
[class](https://stroustrup.com/glossary.html#Gclass) explicitly granted
access to [member](https://stroustrup.com/glossary.html#Gmember)s of a
class by that class. TC++PL 11.5, C.11.4, D&E 2.10, 3.6.1-2.

**friend function** - a
[function](https://stroustrup.com/glossary.html#Gfunction) declared as
[friend](https://stroustrup.com/glossary.html#Gfriend) in a
[class](https://stroustrup.com/glossary.html#Gclass) so that it has the
same access as the class\'
[member](https://stroustrup.com/glossary.html#Gmember)s without having
to be within the [scope](https://stroustrup.com/glossary.html#Gscope) of
the class. And, no, friends do not \"violate
[encapsulation](https://stroustrup.com/glossary.html#Gencapsulation)\".
TC++PL 11.5, 11.2.3, C.11.4, D&E 2.10, 3.6.1.

**front-end** - the parts of a
[compiler](https://stroustrup.com/glossary.html#Gcompiler) that perform
lexical and [syntax](https://stroustrup.com/glossary.html#Gsyntax)
checking, [type
checking](https://stroustrup.com/glossary.html#Gtype-checking), and
initial semantic checking of a [translation
unit](https://stroustrup.com/glossary.html#Gtranslation-unit). Typically
all compiler error messages comes from the front-end. See also:
[back-end](https://stroustrup.com/glossary.html#Gback-end). D&E 3.3.

**front_inserter()** - returns an
[iterator](https://stroustrup.com/glossary.html#Giterator) that can be
used to add [element](https://stroustrup.com/glossary.html#Gelement)s at
the front of the
[container](https://stroustrup.com/glossary.html#Gcontainer) . TC++PL
19.2.4.

**fstream** - a [file
stream](https://stroustrup.com/glossary.html#Gfile-stream) for
[input](https://stroustrup.com/glossary.html#Ginput) and
[output](https://stroustrup.com/glossary.html#Goutput).

**function** - a named sequence of
[statement](https://stroustrup.com/glossary.html#Gstatement)s that can
be invoked/called given
[argument](https://stroustrup.com/glossary.html#Gargument)s and that
might return a [value](https://stroustrup.com/glossary.html#Gvalue). The
[type](https://stroustrup.com/glossary.html#Gtype) of the function
[include](https://stroustrup.com/glossary.html#Ginclude)s the number and
types of argument and the type of the value returned, if any. See also:
[function
declaration](https://stroustrup.com/glossary.html#Gfunction-declaration),
[function body](https://stroustrup.com/glossary.html#Gfunction-body).
TC++PL 2.3, 7, D&E 2.6.

**function argument** - an
[argument](https://stroustrup.com/glossary.html#Gargument) to a
[function](https://stroustrup.com/glossary.html#Gfunction).

**function body** - the outermost
[block](https://stroustrup.com/glossary.html#Gblock) of a
[function](https://stroustrup.com/glossary.html#Gfunction). See also:
[try-block](https://stroustrup.com/glossary.html#Gtry-block), [function
definition](https://stroustrup.com/glossary.html#Gfunction-definition).
TC++PL 2.7, 13.

**function declaration**
-[declaration](https://stroustrup.com/glossary.html#Gdeclaration) of a
[function](https://stroustrup.com/glossary.html#Gfunction), including
its [name](https://stroustrup.com/glossary.html#Gname),
[argument](https://stroustrup.com/glossary.html#Gargument)
[type](https://stroustrup.com/glossary.html#Gtype)s, and return type.

**function definition** - [function
declaration](https://stroustrup.com/glossary.html#Gfunction-declaration)
including a [function
body](https://stroustrup.com/glossary.html#Gfunction-body).

**function member** - see [member
function](https://stroustrup.com/glossary.html#Gmember-function).

**function object**
-[object](https://stroustrup.com/glossary.html#Gobject) with the
[application](https://stroustrup.com/glossary.html#Gapplication)
[operator](https://stroustrup.com/glossary.html#Goperator),
operator()(), defined so that it can be called like a
[function](https://stroustrup.com/glossary.html#Gfunction). A function
object is more general than a function because it can hold data and
provide additional operations. Sometimes called a
[functor](https://stroustrup.com/glossary.html#Gfunctor). Given current
[compiler](https://stroustrup.com/glossary.html#Gcompiler) technology,
simple function objects inline better than
[pointer](https://stroustrup.com/glossary.html#Gpointer)s to functions,
so that parameterization with function objects can be far more efficient
than use of pointers to functions or
[virtual](https://stroustrup.com/glossary.html#Gvirtual) functions. See
also: [binder](https://stroustrup.com/glossary.html#Gbinder),
[adapter](https://stroustrup.com/glossary.html#Gadapter),
[inlining](https://stroustrup.com/glossary.html#Ginlining).
[Example](https://stroustrup.com/bs_faq2.html#function-object). TC++PL
18.4.

**function parameter** - a
[parameter](https://stroustrup.com/glossary.html#Gparameter) of a
[function](https://stroustrup.com/glossary.html#Gfunction).

**function prototype** - [C](https://stroustrup.com/glossary.html#GC)
term for a [function
declaration](https://stroustrup.com/glossary.html#Gfunction-declaration)
that isn\'t also a [function
definition](https://stroustrup.com/glossary.html#Gfunction-definition).
D&E 2.6.

**function template** - see [template
function](https://stroustrup.com/glossary.html#Gtemplate-function).

**function try-block**
-[try-block](https://stroustrup.com/glossary.html#Gtry-block) associated
with the outmost block of a
[function](https://stroustrup.com/glossary.html#Gfunction), the
[function body](https://stroustrup.com/glossary.html#Gfunction-body).
TC++PL 3.7.2.

**functor** - see [function
object](https://stroustrup.com/glossary.html#Gfunction-object).

**G++** - see [GNU C++](https://stroustrup.com/glossary.html#GGNU-C++).

**garbage collection** - techniques for reclaiming unused
[memory](https://stroustrup.com/glossary.html#Gmemory) without relying
on user-supplied [delete](https://stroustrup.com/glossary.html#Gdelete)
or free() commands. A permitted but not required technique for
[C++](https://stroustrup.com/glossary.html#GC++). Commercial and free
garbage collectors exist for C++: See [my C++
page](https://stroustrup.com/C++.html). Use of
[class](https://stroustrup.com/glossary.html#Gclass)es that control
their own storage, such as the [standard
library](https://stroustrup.com/glossary.html#Gstandard-library)
[vector](https://stroustrup.com/glossary.html#Gvector),
[string](https://stroustrup.com/glossary.html#Gstring), and
[map](https://stroustrup.com/glossary.html#Gmap), reduces the need for
garbage [collection](https://stroustrup.com/glossary.html#Gcollection).
See also: [resource acquisition is
initialization](https://stroustrup.com/glossary.html#Gresource-acquisition-is-initialization),
[destructor](https://stroustrup.com/glossary.html#Gdestructor). TC++PL
C.9.1. D&E 10.7.

**general-purpose programming language** - (1) a [programming
language](https://stroustrup.com/glossary.html#Gprogramming-language)
intended for use in a wide range of
[application](https://stroustrup.com/glossary.html#Gapplication) areas
without restrictions that make it totally unsuitable for traditional
major uses of computers, such as mathematical computations, data
processing, text processing, graphics, and communications. (2) a
language that can do what at least as much as other languages called
\"general purpose\" can do. See also:
[C++](https://stroustrup.com/glossary.html#GC++).

**generic programming** - programming using
[template](https://stroustrup.com/glossary.html#Gtemplate)s to express
[algorithm](https://stroustrup.com/glossary.html#Galgorithm)s and data
structures parameterized by data
[type](https://stroustrup.com/glossary.html#Gtype)s, operations, and
polices. See also:
[polymorphism](https://stroustrup.com/glossary.html#Gpolymorphism),
[multi-paradigm
programming](https://stroustrup.com/glossary.html#Gmulti-paradigm-programming).
TC++PL 2.7, 24.4.1, D&E 15.11.2.

**get function** - see
[\>\>](https://stroustrup.com/glossary.html#G%3E%3E).

**global data** - data defined in the [global
scope](https://stroustrup.com/glossary.html#Gglobal-scope). This is
usually best avoided because a programmer can\'t easily know what code
manipulates it and how. It is therefore a common source of errors.
Global [constant](https://stroustrup.com/glossary.html#Gconstant)s are
usually ok.

**global scope** - the
[scope](https://stroustrup.com/glossary.html#Gscope) containing all
[name](https://stroustrup.com/glossary.html#Gname)s defined outside any
[function](https://stroustrup.com/glossary.html#Gfunction),
[class](https://stroustrup.com/glossary.html#Gclass), or
[namespace](https://stroustrup.com/glossary.html#Gnamespace). Names in
the global scope can be prefixed by ::. For example,
::[main()](https://stroustrup.com/glossary.html#Gmain()). TC++PL 2.9.4.

**glossary**
-\"[collection](https://stroustrup.com/glossary.html#Gcollection) of
glosses; lists and explanations of special words.\" - The Advanced
Learners Dictionary of Current English. A pain to compile.

**GNU C++** - GNU\'s implementation of
[C++](https://stroustrup.com/glossary.html#GC++).

**goto** - the infamous goto. Primarily useful in machine generated
[C++](https://stroustrup.com/glossary.html#GC++) code. TC++PL 6.3.4.

**grammar** - a systematic description of the
[syntax](https://stroustrup.com/glossary.html#Gsyntax) of a language.
The [C++](https://stroustrup.com/glossary.html#GC++) grammar is large
and rather messy. Some of the syntactic complexity was inherited from C.
TC++PL A, D&E 2.8.

**GUI** - Graphical User
[Interface](https://stroustrup.com/glossary.html#Ginterface). There are
many [C++](https://stroustrup.com/glossary.html#GC++) libraries and
tools for building GUI-based
[application](https://stroustrup.com/glossary.html#Gapplication)s, but
no [standard C++](https://stroustrup.com/glossary.html#GStandard-C++)
GUI.

**handle** - an [object](https://stroustrup.com/glossary.html#Gobject)
that controls access to another. Often, a handle also controls the
acquisition and release of
[resource](https://stroustrup.com/glossary.html#Gresource)s. A common
use is for a handle to control access to a variably-sized data
structure. See also: [resource acquisition is
initialization](https://stroustrup.com/glossary.html#Gresource-acquisition-is-initialization),
[vector](https://stroustrup.com/glossary.html#Gvector),
[string](https://stroustrup.com/glossary.html#Gstring), [smart
pointer](https://stroustrup.com/glossary.html#Gsmart-pointer). TC++PL
25.7, D&E 11.5.2.

**handle class** - a small
[class](https://stroustrup.com/glossary.html#Gclass) that provides
[interface](https://stroustrup.com/glossary.html#Ginterface) to an
[object](https://stroustrup.com/glossary.html#Gobject) of another class.
A [handle](https://stroustrup.com/glossary.html#Ghandle) is the standard
way of providing
[variable](https://stroustrup.com/glossary.html#Gvariable) sized data
structures in [C++](https://stroustrup.com/glossary.html#GC++). Examples
are [string](https://stroustrup.com/glossary.html#Gstring) and
[vector](https://stroustrup.com/glossary.html#Gvector). TC++PL 25.7.

**handler** - see [exception
handler](https://stroustrup.com/glossary.html#Gexception-handler)

**hash_map** - hashed contained based on the [standard
library](https://stroustrup.com/glossary.html#Gstandard-library)
framework. Not (yet) part of the standard but very common in libraries
based on the standard library. See also:
[map](https://stroustrup.com/glossary.html#Gmap),
[vector](https://stroustrup.com/glossary.html#Gvector), list. TC++PL
17.6.

**header** - see [header
file](https://stroustrup.com/glossary.html#Gheader-file)

**header file** - [file](https://stroustrup.com/glossary.html#Gfile)
holding
[declaration](https://stroustrup.com/glossary.html#Gdeclaration)s used
in more than one [translation
unit](https://stroustrup.com/glossary.html#Gtranslation-unit). Thus, a
[header](https://stroustrup.com/glossary.html#Gheader) file acts as an
[interface](https://stroustrup.com/glossary.html#Ginterface) between
[separately
compiled](https://stroustrup.com/glossary.html#Gseparately-compiled)
parts of a [program](https://stroustrup.com/glossary.html#Gprogram). A
header file often contains [inline
function](https://stroustrup.com/glossary.html#Ginline-function)
definitions, [const
definition](https://stroustrup.com/glossary.html#Gconst-definition)s,
[enumeration](https://stroustrup.com/glossary.html#Genumeration)s, and
[template
definition](https://stroustrup.com/glossary.html#Gtemplate-definition)s,
but it cannot be \#included from for than one [source
file](https://stroustrup.com/glossary.html#Gsource-file) if it contain
non-inline function definitions or [variable
definition](https://stroustrup.com/glossary.html#Gvariable-definition)s.
TC++PL 2.4.1, 9.2.1. D&E 2.5, 11.3.3.

**hiding** - see [information
hiding](https://stroustrup.com/glossary.html#Ginformation-hiding)

**hierarchy** - see [class
hierarchy](https://stroustrup.com/glossary.html#Gclass-hierarchy).

**higher-order function**
-[function](https://stroustrup.com/glossary.html#Gfunction)s that
produce other functions.
[C++](https://stroustrup.com/glossary.html#GC++) does not have general
higher-order functions, but by returning [function
object](https://stroustrup.com/glossary.html#Gfunction-object)s a
function can efficiently emulate some techniques traditionally relying
of higher-order functions. See also:
[binder](https://stroustrup.com/glossary.html#Gbinder). TC++PL 18.4.4.

**history of C++** - The work on what became
[C++](https://stroustrup.com/glossary.html#GC++) started by [Bjarne
Stroustrup](https://stroustrup.com/glossary.html#GBjarne-Stroustrup) in
AT&T [Bell Labs](https://stroustrup.com/glossary.html#GBell-labs) in
1979. The first commercial release was in 1985. Standards work stared in
1990 leading to ratification of the
[ISO](https://stroustrup.com/glossary.html#GISO) standard in 1998.
TC++PL 1.4. D&E Part 1.

**Hungarian notation** - a coding convention that encodes
[type](https://stroustrup.com/glossary.html#Gtype) information in
[variable](https://stroustrup.com/glossary.html#Gvariable)
[name](https://stroustrup.com/glossary.html#Gname)s. Its main use is to
compensate for lack of [type
checking](https://stroustrup.com/glossary.html#Gtype-checking) in
weakly-typed or untyped languages. It is totally unsutable for
[C++](https://stroustrup.com/glossary.html#GC++) where it complicates
[maintenance](https://stroustrup.com/glossary.html#Gmaintenance) and
gets in the way of
[abstraction](https://stroustrup.com/glossary.html#Gabstraction).

**hybrid language** - derogative term for a [programming
language](https://stroustrup.com/glossary.html#Gprogramming-language)
that supports more programming styles
([paradigm](https://stroustrup.com/glossary.html#Gparadigm)s) rather
than just [object-oriented
programming](https://stroustrup.com/glossary.html#Gobject-oriented-programming).

**I/O** - see [iostream](https://stroustrup.com/glossary.html#Giostream)

**IDE** - Integrated (or Interactive) Development Enviornment. A
[software](https://stroustrup.com/glossary.html#Gsoftware) development
environment ([SDE](https://stroustrup.com/glossary.html#GSDE))
emphasizing a [GUI](https://stroustrup.com/glossary.html#GGUI)
[interface](https://stroustrup.com/glossary.html#Ginterface) centered
around a source code editor. There are many IDEs for
[C++](https://stroustrup.com/glossary.html#GC++), but no standard SDE.

**identifier** - see [name](https://stroustrup.com/glossary.html#Gname).

**if-statement**
-[statement](https://stroustrup.com/glossary.html#Gstatement) selecting
between two alternatives based on a condition. TC++PL 6.3.2.

**ifstream** - an [file
stream](https://stroustrup.com/glossary.html#Gfile-stream) for
[input](https://stroustrup.com/glossary.html#Ginput).

**implementation defined** - an aspect of
[C++](https://stroustrup.com/glossary.html#GC++)\'s
[semantics](https://stroustrup.com/glossary.html#Gsemantics) that is
defined for each implementation rather than specified in the standard
for every implementation. An example is the size of an
[int](https://stroustrup.com/glossary.html#Gint) (which must be at least
16 [bit](https://stroustrup.com/glossary.html#Gbit)s but can be longer).
Avoid implementation defined behavior whenever possible. See also:
[undefined](https://stroustrup.com/glossary.html#Gundefined). TC++PL
C.2.

**implementation inheritance** - see [private
base](https://stroustrup.com/glossary.html#Gprivate-base).

**implicit type conversion**
-[conversion](https://stroustrup.com/glossary.html#Gconversion) applied
implicitly based on an expected
[type](https://stroustrup.com/glossary.html#Gtype) and the type of a
[value](https://stroustrup.com/glossary.html#Gvalue). See also,
[explicit type
conversion](https://stroustrup.com/glossary.html#Gexplicit-type-conversion),
[user-defined type
conversion](https://stroustrup.com/glossary.html#Guser-defined-type-conversion).
TC++PL 11.3.3, 11.3.5, 11.4, C.6, D&E 2.6.2, 3.6.1, 3.6.3, 11.2.

**in-class** - lexically within the
[declaration](https://stroustrup.com/glossary.html#Gdeclaration) of a
[class](https://stroustrup.com/glossary.html#Gclass). TC++PL 10.2.9,
10.4.6.2.

**include** - see
[\#include](https://stroustrup.com/glossary.html#G#include).

**incomplete type** -[type](https://stroustrup.com/glossary.html#Gtype)
that allows an [object](https://stroustrup.com/glossary.html#Gobject) to
be copied, but not otherwise used. A
[pointer](https://stroustrup.com/glossary.html#Gpointer) to an
undeclared type is the typical example of an incomplete type.

**inequality operator** - see
[!=](https://stroustrup.com/glossary.html#G!=).

**infix operator** - a [binary
operator](https://stroustrup.com/glossary.html#Gbinary-operator) where
the operator appears between the operands. For example, a+b.

**information hiding** - placing information where it can be accessed
only through a well-defined
[interface](https://stroustrup.com/glossary.html#Ginterface). See also:
[access control](https://stroustrup.com/glossary.html#Gaccess-control),
[abstract class](https://stroustrup.com/glossary.html#Gabstract-class),
[separate
compilation](https://stroustrup.com/glossary.html#Gseparate-compilation).
TC++PL 2.4.

**inheritance** - a [derived
class](https://stroustrup.com/glossary.html#Gderived-class) is said to
inherit the [member](https://stroustrup.com/glossary.html#Gmember)s of
its [base class](https://stroustrup.com/glossary.html#Gbase-class)es.
TC++PL 2.6.2, 12.2, 23.4.3.1, D&E 3.5, 7.2, 12.

**initialization** - giving an
[object](https://stroustrup.com/glossary.html#Gobject) an initial
[value](https://stroustrup.com/glossary.html#Gvalue). Initialization
differs from assignment in that there is no previous value involved.
Initialization is done by
[constructor](https://stroustrup.com/glossary.html#Gconstructor)s.

**initializer list** - comma-separated list of
[expression](https://stroustrup.com/glossary.html#Gexpression)s enclosed
in curly braces, e.g. { 1, 2, 3 } used to initialize a
[struct](https://stroustrup.com/glossary.html#Gstruct) or an
[array](https://stroustrup.com/glossary.html#Garray). TC++PL 5.2.1, 5.7,
11.3.3.

**inline function**
-[function](https://stroustrup.com/glossary.html#Gfunction) declared
inline using the inline keyword or by being a [member
function](https://stroustrup.com/glossary.html#Gmember-function) defined
[in-class](https://stroustrup.com/glossary.html#Gin-class).
[Compiler](https://stroustrup.com/glossary.html#Gcompiler)s are
encouraged to generate inline code rather than function calls for inline
functions. Most benefits from
[inlining](https://stroustrup.com/glossary.html#Ginlining) comes with
very [short](https://stroustrup.com/glossary.html#Gshort) functions.
TC++PL 7.1.1, 9.2, 10.2.9, D&E 2.4.1 .

**inlining** - see [inline
function](https://stroustrup.com/glossary.html#Ginline-function).

**input** - see
[iostream](https://stroustrup.com/glossary.html#Giostream).

**inserter** - (1) an
[iostream](https://stroustrup.com/glossary.html#Giostream)
[\< \<https://stroustrup.com/glossary.html\#G%3C%3C](%3C%20%3Chttps://stroustrup.com/glossary.html#G%3C%3C)
(put to) function. (2) an STL operation yielding an iterator to be used
for adding elements to a containter. TC++PL 19.2.4, 21.2, D&E 8.3.1. See
also: extracter, back_inserter, front_inserter.

**instantiation** - see [template
instantiation](https://stroustrup.com/glossary.html#Gtemplate-instantiation).

**int** - basic signed [integer
type](https://stroustrup.com/glossary.html#Ginteger-type); its precision
is implementation-defined, but an int has at least 32
[bit](https://stroustrup.com/glossary.html#Gbit)s. TC++PL 2.3.1, 4.4.

**integer type** - a
[short](https://stroustrup.com/glossary.html#Gshort),
[int](https://stroustrup.com/glossary.html#Gint), or long. [Standard
C++](https://stroustrup.com/glossary.html#GStandard-C++) doesn\'t
support long long. TC++PL 4.4.

**integral type** - a
[bool](https://stroustrup.com/glossary.html#Gbool), [character
type](https://stroustrup.com/glossary.html#Gcharacter-type), or [integer
type](https://stroustrup.com/glossary.html#Ginteger-type). Supports
arithmetic and logical operations. TC++PL 4.1.1.

**interface** - a set of
[declaration](https://stroustrup.com/glossary.html#Gdeclaration)s that
defines how a part of a
[program](https://stroustrup.com/glossary.html#Gprogram) can be
accessed. The [public
member](https://stroustrup.com/glossary.html#Gpublic-member)s and the
[friend](https://stroustrup.com/glossary.html#Gfriend)s of a
[class](https://stroustrup.com/glossary.html#Gclass) defines that
class\' interface for other code to use. A class without [data
member](https://stroustrup.com/glossary.html#Gdata-member)s defines a
pure interface. The [protected
member](https://stroustrup.com/glossary.html#Gprotected-member)s provide
an additional interface for use by members of [derived
class](https://stroustrup.com/glossary.html#Gderived-class)es. See also:
[abstract class](https://stroustrup.com/glossary.html#Gabstract-class).

**interface function** - A
[function](https://stroustrup.com/glossary.html#Gfunction) that can
access the representation of a
[class](https://stroustrup.com/glossary.html#Gclass). See also:
[friend](https://stroustrup.com/glossary.html#Gfriend), [member
function](https://stroustrup.com/glossary.html#Gmember-function),
[derived class](https://stroustrup.com/glossary.html#Gderived-class),
[protected](https://stroustrup.com/glossary.html#Gprotected).

**interface inheritance** - see [abstract
class](https://stroustrup.com/glossary.html#Gabstract-class), [public
base](https://stroustrup.com/glossary.html#Gpublic-base).

**invariant** - a condition of the representation of an
[object](https://stroustrup.com/glossary.html#Gobject) (the object\'s
state) that should hold each time an [interface
function](https://stroustrup.com/glossary.html#Ginterface-function) is
called; usually established by a
[constructor](https://stroustrup.com/glossary.html#Gconstructor) TC++PL
24.3.7, E.3.5.

**iostream** - (1) [standard
library](https://stroustrup.com/glossary.html#Gstandard-library)
flexible, extensible,
[type](https://stroustrup.com/glossary.html#Gtype)-safe
[input](https://stroustrup.com/glossary.html#Ginput) and
[output](https://stroustrup.com/glossary.html#Goutput) framework. (1)
[stream](https://stroustrup.com/glossary.html#Gstream) that can be used
for both input and output. See also: [file
stream](https://stroustrup.com/glossary.html#Gfile-stream), [string
stream](https://stroustrup.com/glossary.html#Gstring-stream). TC++PL
3.4, 3.6, 21, D&E 3.11.4.1, 8.3.1.

**ISO** - the international standards organization. It defines and
maintains the standards of the major non-proprietary [programming
language](https://stroustrup.com/glossary.html#Gprogramming-language)s,
notably [C++](https://stroustrup.com/glossary.html#GC++).

**ISO C** - see [C](https://stroustrup.com/glossary.html#GC).

**ISO C++** - [C++](https://stroustrup.com/glossary.html#GC++).

**istream** - [input](https://stroustrup.com/glossary.html#Ginput)
[stream](https://stroustrup.com/glossary.html#Gstream)
[type](https://stroustrup.com/glossary.html#Gtype). TC++PL 3.6, 21.3.

**istringstream** - a [string
stream](https://stroustrup.com/glossary.html#Gstring-stream) for
[input](https://stroustrup.com/glossary.html#Ginput).

**iteration** - traversal of data structure, directly or indirectly
using an
[iteration-statement](https://stroustrup.com/glossary.html#Giteration-statement).
See also: [recursion](https://stroustrup.com/glossary.html#Grecursion).
The [standard
library](https://stroustrup.com/glossary.html#Gstandard-library) offer
[algorithm](https://stroustrup.com/glossary.html#Galgorithm)s, such as
[copy()](https://stroustrup.com/glossary.html#Gcopy()) and
[find()](https://stroustrup.com/glossary.html#Gfind()), that can be
effective alternatives to
[explicit](https://stroustrup.com/glossary.html#Gexplicit) iteration.
TC++PL 6.3.3. 18.

**iteration-statement**
-[for-statement](https://stroustrup.com/glossary.html#Gfor-statement),
[while-statement](https://stroustrup.com/glossary.html#Gwhile-statement),
or do-statement.

**iterator** - a [standard
library](https://stroustrup.com/glossary.html#Gstandard-library)
[abstraction](https://stroustrup.com/glossary.html#Gabstraction) for
[object](https://stroustrup.com/glossary.html#Gobject)s referring to
[element](https://stroustrup.com/glossary.html#Gelement)s of a sequence.
TC++PL 3.8.1, 19.2-3.

**K&R C** - [C](https://stroustrup.com/glossary.html#GC) as defined by
[Kernighan](https://stroustrup.com/glossary.html#GKernighan) and
[Ritchie](https://stroustrup.com/glossary.html#GRitchie).

**Kernighan** - Brian Kernighan is a co-author of Kernighan &
[Ritchie](https://stroustrup.com/glossary.html#GRitchie): \"The
[C](https://stroustrup.com/glossary.html#GC) [programming
Language](https://stroustrup.com/glossary.html#Gprogramming-language)\".

**Koenig lookup** - see [argument-based
lookup](https://stroustrup.com/glossary.html#Gargument-based-lookup).

**language extension** - (1) relatively new feature that people haven\'t
yet gotten used to. (2) proposed new feature. (3) feature provided by
one or more implementations, but not adopted by the standard; the use of
some such features implies lock-in to a particular
[compiler](https://stroustrup.com/glossary.html#Gcompiler) supplier.

**learning C++** - focus on
[concept](https://stroustrup.com/glossary.html#Gconcept)s and
techniques. [You don\'t need to learn C
first](https://stroustrup.com/bs_faq.html#prerequisite). See also
\"Learning [Standard
C++](https://stroustrup.com/glossary.html#GStandard-C++) as a New
Language\", available from [my papers
page](https://stroustrup.com/papers.html). [How do I
start?](https://stroustrup.com/bs_faq.html#how-to-start). TC++PL 1.2,
1.7, D&E 7.2.

**Library TR** - technical report from the [ISO
C++](https://stroustrup.com/glossary.html#GISO-C++) standards committee
defining a set of new standard library components, including regular
[expression](https://stroustrup.com/glossary.html#Gexpression) matching
(regexp), hashedcontainers
(ordered\_[map](https://stroustrup.com/glossary.html#Gmap)), and [smart
pointer](https://stroustrup.com/glossary.html#Gsmart-pointer)s. See [my
C++ page](https://stroustrup.com/C++.html).

**line comment**
-[comment](https://stroustrup.com/glossary.html#Gcomment) started by //
and terminated by end-of-line. TC++PL 6.4, D&E 3.11.1.

**linkage** - the process of merging code from [separately
compiled](https://stroustrup.com/glossary.html#Gseparately-compiled)
[translation
unit](https://stroustrup.com/glossary.html#Gtranslation-unit)s into a
[program](https://stroustrup.com/glossary.html#Gprogram) or part of a
program. TC++PL 9.

**linker** - the part of a
[C++](https://stroustrup.com/glossary.html#GC++) implementation that
merge the code generated from [separately
compiled](https://stroustrup.com/glossary.html#Gseparately-compiled)
[translation
unit](https://stroustrup.com/glossary.html#Gtranslation-unit)s into a
[program](https://stroustrup.com/glossary.html#Gprogram) or part of a
program. TC++PL 9.1, D&E 4.5, 11.3.

**Liskov Substitution Principle**
-[design](https://stroustrup.com/glossary.html#Gdesign)
[class](https://stroustrup.com/glossary.html#Gclass)es so that any
[derived class](https://stroustrup.com/glossary.html#Gderived-class)
will be acceptable where its [base
class](https://stroustrup.com/glossary.html#Gbase-class) is.
[C++](https://stroustrup.com/glossary.html#GC++) [public
base](https://stroustrup.com/glossary.html#Gpublic-base)s enforce that
as far as the
[interface](https://stroustrup.com/glossary.html#Ginterface) provided by
the base class. TC++PL 24.3.4, D&E 2.10.

**list** - [standard
library](https://stroustrup.com/glossary.html#Gstandard-library) linked
[container](https://stroustrup.com/glossary.html#Gcontainer). See also:
[vector](https://stroustrup.com/glossary.html#Gvector),
[map](https://stroustrup.com/glossary.html#Gmap). TC++PL 3.7.3, 17.2.2.

**literal** - notation for
[value](https://stroustrup.com/glossary.html#Gvalue)s of
[bool](https://stroustrup.com/glossary.html#Gbool), [character
type](https://stroustrup.com/glossary.html#Gcharacter-type)s, [integer
type](https://stroustrup.com/glossary.html#Ginteger-type)s, or
[floating-point
type](https://stroustrup.com/glossary.html#Gfloating-point-type)s. See
also: [enumerator](https://stroustrup.com/glossary.html#Genumerator)s.
TC++PL 4.2, 4.3.1, 4.4.1, 4.5.1, 5.2.2, D&E 11.2.1.

**local class** -[class](https://stroustrup.com/glossary.html#Gclass)
defined within a
[function](https://stroustrup.com/glossary.html#Gfunction). Most often,
the use of a local class is a sign that a function is too large. Beware
that a local class cannot be a valid [template
argument](https://stroustrup.com/glossary.html#Gtemplate-argument).

**local function**
-[function](https://stroustrup.com/glossary.html#Gfunction) defined
within a function. Not supported by
[C++](https://stroustrup.com/glossary.html#GC++). Most often, the use of
a local function is a sign that a function is too large.

**locale** - [standard
library](https://stroustrup.com/glossary.html#Gstandard-library)
[class](https://stroustrup.com/glossary.html#Gclass) for representing
culture dependencies relating to
[input](https://stroustrup.com/glossary.html#Ginput) and
[output](https://stroustrup.com/glossary.html#Goutput), such as
floating-point output formats, [character
set](https://stroustrup.com/glossary.html#Gcharacter-set)s, and
collating rules. A locale is a
[container](https://stroustrup.com/glossary.html#Gcontainer) of
[facet](https://stroustrup.com/glossary.html#Gfacet)s. TC++PL 21.1, D.

**long double** - extended-precision floating-point number. TC++PL 4.5.

**long int** - integer of a size greater than or equal to the size of an
int. TC++PL 4.4.

**loop** - a
[statement](https://stroustrup.com/glossary.html#Gstatement) that
expresses the notion of doing something
[zero](https://stroustrup.com/glossary.html#Gzero) or more times, such
as a
[for-statement](https://stroustrup.com/glossary.html#Gfor-statement) and
a
[while-statement](https://stroustrup.com/glossary.html#Gwhile-statement).

**LSP** - see [Liskov Substitution
Principle](https://stroustrup.com/glossary.html#GLiskov-Substitution-Principle).

**lvalue** - an
[expression](https://stroustrup.com/glossary.html#Gexpression) that may
appear on the left-hand side of an assignment; for example, v\[7\] if v
is an [array](https://stroustrup.com/glossary.html#Garray) or a
[vector](https://stroustrup.com/glossary.html#Gvector). An lvalue is
modifiable unless it is
[const](https://stroustrup.com/glossary.html#Gconst). TC++PL 4.9.6, D&E
3.7.1.

**macro** - facility for character substitution; doesn\'t obey
[C++](https://stroustrup.com/glossary.html#GC++)
[scope](https://stroustrup.com/glossary.html#Gscope) or
[type](https://stroustrup.com/glossary.html#Gtype) rules. C++ provides
alternatives to most uses of macros; see
[template](https://stroustrup.com/glossary.html#Gtemplate), inline,
[const](https://stroustrup.com/glossary.html#Gconst), and
[namespace](https://stroustrup.com/glossary.html#Gnamespace). Don\'t use
macros unless you absolutely have to. TC++PL 7.8, D&E 2.9.2, 4.4, 18.

**main()** - the
[function](https://stroustrup.com/glossary.html#Gfunction) called by the
system to start a [C++](https://stroustrup.com/glossary.html#GC++)
[program](https://stroustrup.com/glossary.html#Gprogram). TC++PL 3.2,
6.1.7, 9.4 .

**maintenance** - work on a
[program](https://stroustrup.com/glossary.html#Gprogram) after its
initial release. Typical maintenance activities
[include](https://stroustrup.com/glossary.html#Ginclude)
[bug](https://stroustrup.com/glossary.html#Gbug) fixing, minor feature
enhancements, porting to new systems, improvements of [error
handling](https://stroustrup.com/glossary.html#Gerror-handling),
modification to use different natural languages, improvements to
documentation, and performance tuning. Maintenance typically consumes
more than 80% of the total effort and cost expended on a program.

**malloc()** - [C](https://stroustrup.com/glossary.html#GC) standard
allocation [function](https://stroustrup.com/glossary.html#Gfunction).
Use [new](https://stroustrup.com/glossary.html#Gnew#) or
[vector](https://stroustrup.com/glossary.html#Gvector) instead.

**map** - [standard
library](https://stroustrup.com/glossary.html#Gstandard-library)
associative
[container](https://stroustrup.com/glossary.html#Gcontainer), based on
\"less than\" ordering. See also:
[hash_map](https://stroustrup.com/glossary.html#Ghash_map),
[vector](https://stroustrup.com/glossary.html#Gvector), list. TC++PL
3.7.4, 17.4.1.

**Max Munch** - (1) mythical participant in the [C++ standards
process](https://stroustrup.com/glossary.html#GC++-standards-process).
(2) the rule that says that while parsing C++ always chooses the
lexically or syntactically longest alternative. Thus ++ is the increment
operation, not two additions, and [long
int](https://stroustrup.com/glossary.html#Glong-int) is a single
[integer type](https://stroustrup.com/glossary.html#Ginteger-type)
rather than the long integer followed by an int. Cross references in
this [glossary](https://stroustrup.com/glossary.html#Gglossary) follow
this rule.

**member** - [type](https://stroustrup.com/glossary.html#Gtype),
[variable](https://stroustrup.com/glossary.html#Gvariable),
[constant](https://stroustrup.com/glossary.html#Gconstant), or
[function](https://stroustrup.com/glossary.html#Gfunction) declared in
the [scope](https://stroustrup.com/glossary.html#Gscope) of a
[class](https://stroustrup.com/glossary.html#Gclass). TC++PL 5.7, 10.2,
D&E 2.3, 2.5.2, 2.11.

**member class** - a
[class](https://stroustrup.com/glossary.html#Gclass) that is a
[member](https://stroustrup.com/glossary.html#Gmember) of another; also
called a [nested
class](https://stroustrup.com/glossary.html#Gnested-class). TC++PL
11.12, D&E 3.12, 13.5.

**member constant**
-[const](https://stroustrup.com/glossary.html#Gconst) or
[enumeration](https://stroustrup.com/glossary.html#Genumeration)
declared as a [member](https://stroustrup.com/glossary.html#Gmember). If
initialized [in-class](https://stroustrup.com/glossary.html#Gin-class),
such a [constant](https://stroustrup.com/glossary.html#Gconstant) can be
used in [constant
expression](https://stroustrup.com/glossary.html#Gconstant-expression)s
within the class. TC++PL 10.4.6.2.

**member data** - see [data
member](https://stroustrup.com/glossary.html#Gdata-member).

**member function** - a
[function](https://stroustrup.com/glossary.html#Gfunction) declared in
the [scope](https://stroustrup.com/glossary.html#Gscope) of a
[class](https://stroustrup.com/glossary.html#Gclass). A
[member](https://stroustrup.com/glossary.html#Gmember) function that is
not a [static member
function](https://stroustrup.com/glossary.html#Gstatic-member-function)
must be called for an
[object](https://stroustrup.com/glossary.html#Gobject) of its class.
TC++PL 10.2.1, D&E 2.3, 3.5.

**member initializer** - initializer for a
[member](https://stroustrup.com/glossary.html#Gmember) specified in the
[constructor](https://stroustrup.com/glossary.html#Gconstructor) for its
[class](https://stroustrup.com/glossary.html#Gclass). TC++PL 10.4.6,
12.2.2, D&E 12.9.

**member type** - [member
class](https://stroustrup.com/glossary.html#Gmember-class), member
[enumeration](https://stroustrup.com/glossary.html#Genumeration), or
member [typedef](https://stroustrup.com/glossary.html#Gtypedef).

**memberwise copy** - copying a
[class](https://stroustrup.com/glossary.html#Gclass)
[object](https://stroustrup.com/glossary.html#Gobject) by copying each
of its [member](https://stroustrup.com/glossary.html#Gmember)s in turn,
using proper [copy
constructor](https://stroustrup.com/glossary.html#Gcopy-constructor)s or
[copy
assignment](https://stroustrup.com/glossary.html#Gcopy-assignment)s.
That\'s the default meaning of copy. TC++PL 10.4.4.1, 10.4.6.3, D&E
11.4.4.

**memory** - [static
memory](https://stroustrup.com/glossary.html#Gstatic-memory),
[stack](https://stroustrup.com/glossary.html#Gstack), or [free
store](https://stroustrup.com/glossary.html#Gfree-store).

**memory management** - a way of allocating and freeing
[memory](https://stroustrup.com/glossary.html#Gmemory). In
[C++](https://stroustrup.com/glossary.html#GC++) memory is either
[static](https://stroustrup.com/glossary.html#Gstatic), allocated on the
[stack](https://stroustrup.com/glossary.html#Gstack), or allocated on
the [free store](https://stroustrup.com/glossary.html#Gfree-store). When
people talk about memory management, they usually think of free store or
even specifically about [garbage
collection](https://stroustrup.com/glossary.html#Ggarbage-collection).
Memory can often be effectively managed through [standard
library](https://stroustrup.com/glossary.html#Gstandard-library)
[container](https://stroustrup.com/glossary.html#Gcontainer)s, such as
[vector](https://stroustrup.com/glossary.html#Gvector) or
[string](https://stroustrup.com/glossary.html#Gstring), or through
general [resource
management](https://stroustrup.com/glossary.html#Gresource-management)
techniques. See also:
[auto_ptr](https://stroustrup.com/glossary.html#Gauto_ptr),
[constructor](https://stroustrup.com/glossary.html#Gconstructor),
[destructor](https://stroustrup.com/glossary.html#Gdestructor),
[resource acquisition is
initialization](https://stroustrup.com/glossary.html#Gresource-acquisition-is-initialization).
TC++PL C.9, D&E 3.9, 10.

**mem_fun()** - an
[adapter](https://stroustrup.com/glossary.html#Gadapter) that allows a
[member function](https://stroustrup.com/glossary.html#Gmember-function)
to be used as an
[argument](https://stroustrup.com/glossary.html#Gargument) to a standard
[algorithm](https://stroustrup.com/glossary.html#Galgorithm) requiring a
[free-standing
function](https://stroustrup.com/glossary.html#Gfree-standing-function).
TC++PL 18.4.4.2.

**method** - see [virtual member
function](https://stroustrup.com/glossary.html#Gvirtual-member-function).

**Microsoft C++** - see [Visual
C++](https://stroustrup.com/glossary.html#GVisual-C++)

**modifiable lvalue**
-[lvalue](https://stroustrup.com/glossary.html#Glvalue) that is not
[const](https://stroustrup.com/glossary.html#Gconst). TC++PL 4.9.6.

**most-derived type** - the
[type](https://stroustrup.com/glossary.html#Gtype) used to create an
[object](https://stroustrup.com/glossary.html#Gobject) (before any
[conversion](https://stroustrup.com/glossary.html#Gconversion)s). See
also: [dynamic
type](https://stroustrup.com/glossary.html#Gdynamic-type), [static
type](https://stroustrup.com/glossary.html#Gstatic-type).

**multi-method** - a
[virtual](https://stroustrup.com/glossary.html#Gvirtual)
[function](https://stroustrup.com/glossary.html#Gfunction) that selects
the function to be called based on more than one operand. See also:
[multiple
dispatch](https://stroustrup.com/glossary.html#Gmultiple-dispatch). D&E
13.8.

**multi-paradigm design**
-[design](https://stroustrup.com/glossary.html#Gdesign) focussed on
applying the various
[paradigm](https://stroustrup.com/glossary.html#Gparadigm)s to their
best advantage. See also: [multi-paradigm
programming](https://stroustrup.com/glossary.html#Gmulti-paradigm-programming).

**multi-paradigm programming** - programming applying different styles
of programming, such as [object-oriented
programming](https://stroustrup.com/glossary.html#Gobject-oriented-programming)
and [generic
programming](https://stroustrup.com/glossary.html#Ggeneric-programming)
where they are most appropriate. In particular, programming using
combinations of different programming styles
([paradigm](https://stroustrup.com/glossary.html#Gparadigm)s) to express
code more clearly than is possible using only one style. See also:
[C++](https://stroustrup.com/glossary.html#GC++).

**multimap** - [map](https://stroustrup.com/glossary.html#Gmap) that
allows multiple [value](https://stroustrup.com/glossary.html#Gvalue)s
for a key. TC++PL 17.4.2.

**multiple dispatch** - the generalization of [double
dispatch](https://stroustrup.com/glossary.html#Gdouble-dispatch) to more
operands. See also: [single
dispatch](https://stroustrup.com/glossary.html#Gsingle-dispatch).

**multiple inheritance** - the use of more than one immediate [base
class](https://stroustrup.com/glossary.html#Gbase-class) for a [derived
class](https://stroustrup.com/glossary.html#Gderived-class). One typical
use is to have one base define an
[interface](https://stroustrup.com/glossary.html#Ginterface) and another
providing help for the implementation. TC++PL 12.2.4, 12.4, 15.2.5, D&E
12.

**mutable** - an attribute of a
[member](https://stroustrup.com/glossary.html#Gmember) that makes it
possible to change its
[value](https://stroustrup.com/glossary.html#Gvalue) even if its
[object](https://stroustrup.com/glossary.html#Gobject) is declared to be
[const](https://stroustrup.com/glossary.html#Gconst) TC++PL 10.2.7.2,
D&E 13.3.3.

**name** - sequence of letters and digits started by a letter, used to
identify (\"name\") user-defined entities in
[program](https://stroustrup.com/glossary.html#Gprogram) text. An
underscore is considered a letter. Names are case sensitive. The
standard imposes no upper limit on the length of names. TC++PL 4.9.3.

**namespace** - a named
[scope](https://stroustrup.com/glossary.html#Gscope). TC++PL 2.5.1, 8.1,
C.10. D&E 17.

**namespace alias** - alternative
[name](https://stroustrup.com/glossary.html#Gname) for a
[namespace](https://stroustrup.com/glossary.html#Gnamespace); often a
shorter name. TC++PL 8.2.7, D&E 17.4.3.

**NCITS** - [National Committee for Information Technology
Standards](http://www.ncits.org/). The part of
[ANSI](https://stroustrup.com/glossary.html#GANSI) that deals with
[programming
language](https://stroustrup.com/glossary.html#Gprogramming-language)
standards, notably [C++](https://stroustrup.com/glossary.html#GC++), and
sells copies of the [C++
standard](https://stroustrup.com/glossary.html#GC++-standard). Formerly
known as X3.

**nested class** - see [member
class](https://stroustrup.com/glossary.html#Gmember-class).

**nested function** - see [local
function](https://stroustrup.com/glossary.html#Glocal-function).

**new** - [object](https://stroustrup.com/glossary.html#Gobject)
creation [operator](https://stroustrup.com/glossary.html#Goperator). See
also: [constructor](https://stroustrup.com/glossary.html#Gconstructor),
[placement new](https://stroustrup.com/glossary.html#Gplacement-new),
[operator new()](https://stroustrup.com/glossary.html#Goperator-new()),
[resource
management](https://stroustrup.com/glossary.html#Gresource-management),
[memory
management](https://stroustrup.com/glossary.html#Gmemory-management),
[garbage
collection](https://stroustrup.com/glossary.html#Ggarbage-collection).
TC++PL 6.2.6, 19.4.5, D&E 2.3, 10.2.

**new-style cast**
-[dynamic_cast](https://stroustrup.com/glossary.html#Gdynamic_cast),
[static_cast](https://stroustrup.com/glossary.html#Gstatic_cast),
[const_cast](https://stroustrup.com/glossary.html#Gconst_cast), or
[reinterpret_cast](https://stroustrup.com/glossary.html#Greinterpret_cast).
D&E 14.3.

**new_handler** - a (possibly user-defined)
[function](https://stroustrup.com/glossary.html#Gfunction) called by
[new](https://stroustrup.com/glossary.html#Gnew#) if [operator
new()](https://stroustrup.com/glossary.html#Goperator-new()) fails to
allocate sufficient
[memory](https://stroustrup.com/glossary.html#Gmemory). See also:
std::[bad_alloc](https://stroustrup.com/glossary.html#Gbad_alloc)
[exception](https://stroustrup.com/glossary.html#Gexception). TC++PL
6.2.6.2, 14.4.5., 19.4.5.

**non-static member**
-[member](https://stroustrup.com/glossary.html#Gmember) of a
[class](https://stroustrup.com/glossary.html#Gclass) that is not
declared to be a [static
member](https://stroustrup.com/glossary.html#Gstatic-member). An
[object](https://stroustrup.com/glossary.html#Gobject) of a class has
its own space for each non-static [data
member](https://stroustrup.com/glossary.html#Gdata-member).

**not** - synonym for !, the logical negation
[operator](https://stroustrup.com/glossary.html#Goperator) TC++PL C.3.1.

**nothrow guarantee** - the guarantee that an operation will not
[throw](https://stroustrup.com/glossary.html#Gthrow) an
[exception](https://stroustrup.com/glossary.html#Gexception). See also
[exception
safety](https://stroustrup.com/glossary.html#Gexception-safety), [basic
guarantee](https://stroustrup.com/glossary.html#Gbasic-guarantee), and
[strong
guarantee](https://stroustrup.com/glossary.html#Gstrong-guarantee).
TC++PL E.2.

**NULL** - [zero](https://stroustrup.com/glossary.html#Gzero). 0. 0 is
an integer. 0 can be implicitly converted to every
[pointer](https://stroustrup.com/glossary.html#Gpointer)
[type](https://stroustrup.com/glossary.html#Gtype). See also:
[nullptr](https://stroustrup.com/glossary.html#Gnullptr). TC++PL 5.1.1,
D&E 11.2.3.

**nullptr** - [C++0x](https://stroustrup.com/glossary.html#GC++0x)
keyword for the [null](https://stroustrup.com/glossary.html#GNULL)
[pointer](https://stroustrup.com/glossary.html#Gpointer). It is not an
integer. It can be assigned only to pointers.

**object** - (1) a contiguous region of
[memory](https://stroustrup.com/glossary.html#Gmemory) holding a
[value](https://stroustrup.com/glossary.html#Gvalue) of some
[type](https://stroustrup.com/glossary.html#Gtype). (2) a named or
unnamed [variable](https://stroustrup.com/glossary.html#Gvariable) of
some type; an object of a type with a
[constructor](https://stroustrup.com/glossary.html#Gconstructor) is not
considered an object before the constructor has completed and is no
longer considered an object once a
[destructor](https://stroustrup.com/glossary.html#Gdestructor) has
started executing for it. Objects can be allocated in [static
memory](https://stroustrup.com/glossary.html#Gstatic-memory), on the
[stack](https://stroustrup.com/glossary.html#Gstack), on on the [free
store](https://stroustrup.com/glossary.html#Gfree-store). TC++PL 4.9.6,
10.4, 10.4.3, D&E 2.3, 3.9.

**object code** - see [object
file](https://stroustrup.com/glossary.html#Gobject-file).

**object file** - the result of compiling a [source
file](https://stroustrup.com/glossary.html#Gsource-file). See also:
[compiler](https://stroustrup.com/glossary.html#Gcompiler).

**object-oriented design**
-[design](https://stroustrup.com/glossary.html#Gdesign) focussed on
[object](https://stroustrup.com/glossary.html#Gobject)s and
[object-oriented
programming](https://stroustrup.com/glossary.html#Gobject-oriented-programming).
TC++PL 23.2, D&E 7.2.

**object-oriented programming** - programming using
[class](https://stroustrup.com/glossary.html#Gclass) hierarchies and
[virtual](https://stroustrup.com/glossary.html#Gvirtual)
[function](https://stroustrup.com/glossary.html#Gfunction)s to allow
manipulation of [object](https://stroustrup.com/glossary.html#Gobject)s
of a variety of [type](https://stroustrup.com/glossary.html#Gtype)s
through well-defined
[interface](https://stroustrup.com/glossary.html#Ginterface)s and allow
a program to be extended incrementally through derivation. See also:
[polymorphism](https://stroustrup.com/glossary.html#Gpolymorphism),
[data
abstraction](https://stroustrup.com/glossary.html#Gdata-abstraction).
TC++PL 2.6, 12, D&E 3.5, 7.2.

**object-oriented programming language** - a [programming
language](https://stroustrup.com/glossary.html#Gprogramming-language)
designed to support or enforce some notion of [object-oriented
programming](https://stroustrup.com/glossary.html#Gobject-oriented-programming).
[C++](https://stroustrup.com/glossary.html#GC++) supports
[OOP](https://stroustrup.com/glossary.html#GOOP) and other effective
forms of programming, but does not try to enforce a single style of
programming. See also: [generic
programming](https://stroustrup.com/glossary.html#Ggeneric-programming),
[multi-paradigm
programming](https://stroustrup.com/glossary.html#Gmulti-paradigm-programming),
[hybrid
language](https://stroustrup.com/glossary.html#Ghybrid-language).

**ODR** - see [one definition
rule](https://stroustrup.com/glossary.html#Gone-definition-rule)

**ofstream** - an [file
stream](https://stroustrup.com/glossary.html#Gfile-stream) for
[output](https://stroustrup.com/glossary.html#Goutput).

**old-style cast** - see [C-style
cast](https://stroustrup.com/glossary.html#GC-style-cast).

**one definition rule** - there must be exactly one
[definition](https://stroustrup.com/glossary.html#Gdefinition#) of each
entity in a [program](https://stroustrup.com/glossary.html#Gprogram). If
more than one definition appears, say because of replication through
[header file](https://stroustrup.com/glossary.html#Gheader-file)s, the
meaning of all such duplicates must be identical. TC++PL 9.2.3, D&E 2.5,
15.10.2.

**OOD** - see [object-oriented
design](https://stroustrup.com/glossary.html#Gobject-oriented-design).

**OOP** - see [object-oriented
programming](https://stroustrup.com/glossary.html#Gobject-oriented-programming).

**OOPL** - see [object-oriented programming
language](https://stroustrup.com/glossary.html#Gobject-oriented-programming-language).

**operator** - conventional notation for built-in operation, such as +,
\*, and &. A programmer can define meanings for operators for
[user-defined
type](https://stroustrup.com/glossary.html#Guser-defined-type)s. See
also: [operator
overloading](https://stroustrup.com/glossary.html#Goperator-overloading),
[unary operator](https://stroustrup.com/glossary.html#Gunary-operator),
[binary
operator](https://stroustrup.com/glossary.html#Gbinary-operator),
[ternary
operator](https://stroustrup.com/glossary.html#Gternary-operator),
[prefix
operator](https://stroustrup.com/glossary.html#Gprefix-operator),
[postfix
operator](https://stroustrup.com/glossary.html#Gpostfix-operator).
TC++PL 6.2.

**operator delete()** - deallocation
[function](https://stroustrup.com/glossary.html#Gfunction) used by
[delete](https://stroustrup.com/glossary.html#Gdelete)\#. Possibly
defined by user. TC++PL 6.2.6.2, 19.4.5. See also: [operator
new()](https://stroustrup.com/glossary.html#Goperator-new()).

**operator delete\[\]()** - deallocation
[function](https://stroustrup.com/glossary.html#Gfunction) used by
[delete](https://stroustrup.com/glossary.html#Gdelete)\#. Possibly
defined by user. TC++PL 6.2.6.2, 19.4.5. See also: [operator
new\[\]()](https://stroustrup.com/glossary.html#Goperator-new%5B%5D()).

**operator function**
-[function](https://stroustrup.com/glossary.html#Gfunction) defining one
of the standard
[operator](https://stroustrup.com/glossary.html#Goperator)s; e.g.
operator+(). See also: operator, [operator
overloading](https://stroustrup.com/glossary.html#Goperator-overloading),
[conversion
operator](https://stroustrup.com/glossary.html#Gconversion-operator).

**operator new()** - allocation
[function](https://stroustrup.com/glossary.html#Gfunction) used by
[new](https://stroustrup.com/glossary.html#Gnew#). Possibly defined by
user. TC++PL 6.2.6.2, 19.4.5. See also: [operator
delete()](https://stroustrup.com/glossary.html#Goperator-delete()).

**operator new\[\]()** - allocation
[function](https://stroustrup.com/glossary.html#Gfunction) used by
[new](https://stroustrup.com/glossary.html#Gnew#). Possibly defined by
user. TC++PL 6.2.6.2, 19.4.5. See also: [operator
delete\[\]()](https://stroustrup.com/glossary.html#Goperator-delete%5B%5D()).

**operator overloading** - having more than one
[operator](https://stroustrup.com/glossary.html#Goperator) with the same
[name](https://stroustrup.com/glossary.html#Gname) in the same
[scope](https://stroustrup.com/glossary.html#Gscope). Built-in
operators, such as + and \*, are overloaded for
[type](https://stroustrup.com/glossary.html#Gtype)s such as
[int](https://stroustrup.com/glossary.html#Gint) and
[float](https://stroustrup.com/glossary.html#Gfloat). Users can define
their own additional meanings for [user-defined
type](https://stroustrup.com/glossary.html#Guser-defined-type)s. It is
not possible to define new operators or to give new meanings to
operators for [built-in
type](https://stroustrup.com/glossary.html#Gbuilt-in-type)s. The
[compiler](https://stroustrup.com/glossary.html#Gcompiler) picks the
operator to be used based on
[argument](https://stroustrup.com/glossary.html#Gargument) types based
[overload
resolution](https://stroustrup.com/glossary.html#Goverload-resolution)
rules. See also: overload resolution. TC++PL 6.2, D&E 3.6, 11.7.1.

**optimizer** - a part of a
[compiler](https://stroustrup.com/glossary.html#Gcompiler) that
eliminates redundant operations from code and adjusts code to perform
better on a given computer. See also,
[front-end](https://stroustrup.com/glossary.html#Gfront-end),
[back-end](https://stroustrup.com/glossary.html#Gback-end), [code
generator](https://stroustrup.com/glossary.html#Gcode-generator). D&E
3.3.3.

**or** - synonym for \|\|, the logical or
[operator](https://stroustrup.com/glossary.html#Goperator) TC++PL C.3.1.

**order of construction** - a
[class](https://stroustrup.com/glossary.html#Gclass)
[object](https://stroustrup.com/glossary.html#Gobject) is constructed
from the bottom up: first bases in
[declaration](https://stroustrup.com/glossary.html#Gdeclaration) order,
then [member](https://stroustrup.com/glossary.html#Gmember)s in
declaration order, and
[finally](https://stroustrup.com/glossary.html#Gfinally) the body of the
[constructor](https://stroustrup.com/glossary.html#Gconstructor) itself.
TC++PL 10.4.6, 12.2.2, 15.2.4.1, 15.4.3. D&E 2.11.1, 13.2.4.2.

**order of destruction** - a
[class](https://stroustrup.com/glossary.html#Gclass)
[object](https://stroustrup.com/glossary.html#Gobject) is destroyed in
the reverse [order of
construction](https://stroustrup.com/glossary.html#Gorder-of-construction).
See also:
[destructor](https://stroustrup.com/glossary.html#Gdestructor).

**ostream** - [output](https://stroustrup.com/glossary.html#Goutput)
[stream](https://stroustrup.com/glossary.html#Gstream)
[type](https://stroustrup.com/glossary.html#Gtype). TC++PL 3.4, 21.2.

**ostringstream** - a [string
stream](https://stroustrup.com/glossary.html#Gstring-stream) for
[output](https://stroustrup.com/glossary.html#Goutput).

**output** - see
[iostream](https://stroustrup.com/glossary.html#Giostream).

**out_of_range** - standard
[exception](https://stroustrup.com/glossary.html#Gexception) thrown by
[vector](https://stroustrup.com/glossary.html#Gvector) if an
[argument](https://stroustrup.com/glossary.html#Gargument) to at() is
out of range. TC++PL 16.3.3.

**overload** - see
[overloading](https://stroustrup.com/glossary.html#Goverloading).

**overload resolution** - a set of rules for selecting the best version
of an [operator](https://stroustrup.com/glossary.html#Goperator) based
on the [type](https://stroustrup.com/glossary.html#Gtype)s of its
operands. A set of rules for selecting the best version of an overloaded
[function](https://stroustrup.com/glossary.html#Gfunction) based on the
types of its
[argument](https://stroustrup.com/glossary.html#Gargument)s. The intent
of the overload resolution rules is to reject ambiguous uses and to
select the simplest function or operator for each use. TC++PL 6.2, D&E
11.2.

**overloaded function** - see
[overloading](https://stroustrup.com/glossary.html#Goverloading).

**overloaded operator** - see [operator
overloading](https://stroustrup.com/glossary.html#Goperator-overloading)

**overloading** - having more than one
[function](https://stroustrup.com/glossary.html#Gfunction) with the same
[name](https://stroustrup.com/glossary.html#Gname) in the same
[scope](https://stroustrup.com/glossary.html#Gscope) or having more than
one [operator](https://stroustrup.com/glossary.html#Goperator) with the
same name in the same scope. It is not possible to
[overload](https://stroustrup.com/glossary.html#Goverload) across
different scopes. See also:
[using-declaration](https://stroustrup.com/glossary.html#Gusing-declaration).
TC++PL 6.2, D&E 3.6, 11.2.

**override** - see
[overriding](https://stroustrup.com/glossary.html#Goverriding).

**overriding** - declaring a
[function](https://stroustrup.com/glossary.html#Gfunction) in a [derived
class](https://stroustrup.com/glossary.html#Gderived-class) with the
same [name](https://stroustrup.com/glossary.html#Gname) and a matching
[type](https://stroustrup.com/glossary.html#Gtype) as a
[virtual](https://stroustrup.com/glossary.html#Gvirtual) function in a
[base class](https://stroustrup.com/glossary.html#Gbase-class). The
[argument](https://stroustrup.com/glossary.html#Gargument) types must
match exactly. The return types must match exactly or be co-variant. The
overriding function will be invoked when the virtual function is called.
TC++PL 15.6.2, 6.2, D&E 3.5.2-3, 13.7.

**paradigm** - pretentious and overused term for a way of thinking.
Often used with the erroneous assumption that \"paradigms\" are mutually
exclusive, and often assuming that one paradigm is inherently superior
to all others. Derived from Kuhn\'s theory of science. TC++PL 2.2.

**parameter** - a
[variable](https://stroustrup.com/glossary.html#Gvariable) declared in a
[function](https://stroustrup.com/glossary.html#Gfunction) or
[template](https://stroustrup.com/glossary.html#Gtemplate)s for
representing an
[argument](https://stroustrup.com/glossary.html#Gargument). Also called
a formal argument. Similarly, for templates.

**partial specialization** - a
[template](https://stroustrup.com/glossary.html#Gtemplate) used (only)
for the subset of its [template
parameter](https://stroustrup.com/glossary.html#Gtemplate-parameter)s
that matches a
[specialization](https://stroustrup.com/glossary.html#Gspecialization)
pattern. TC++PL 13.5.

**Performance TR** - technical report from the [ISO
C++](https://stroustrup.com/glossary.html#GISO-C++) standards committee
discussing issues related to perfoemance, especially as concerns
embedded systems programming and hardware access. See [my C++
page](https://stroustrup.com/C++.html).

**placement delete** - See [explicit call of
destructor](https://stroustrup.com/glossary.html#Gexplicit-call-of-destructor).

**placement new** - a version of the
[new](https://stroustrup.com/glossary.html#Gnew#)
[operator](https://stroustrup.com/glossary.html#Goperator) where the
user can add [argument](https://stroustrup.com/glossary.html#Gargument)s
to guide allocation. The simplest form, where the
[object](https://stroustrup.com/glossary.html#Gobject) is placed in a
specific location, is supported by the [standard
library](https://stroustrup.com/glossary.html#Gstandard-library).
[Example](https://stroustrup.com/bs_faq2.html#placement-delete). For
example, placement new is used in the implementation of standard library
[container](https://stroustrup.com/glossary.html#Gcontainer)s. See also:
[explicit call of
destructor](https://stroustrup.com/glossary.html#Gexplicit-call-of-destructor).
TC++PL 10.4.11, E.3.1, D&E 10.4.

**POD** - \"Plain Old Data\" - (roughly) a
[class](https://stroustrup.com/glossary.html#Gclass) that doesn\'t
contain [data
member](https://stroustrup.com/glossary.html#Gdata-member)s that would
be illegal in [C](https://stroustrup.com/glossary.html#GC). A POD can
therefore be used for data that needs to be share with C
[function](https://stroustrup.com/glossary.html#Gfunction)s. A POD can
have non-[virtual member
function](https://stroustrup.com/glossary.html#Gvirtual-member-function)s.

**pointer** - an [object](https://stroustrup.com/glossary.html#Gobject)
holding an [address](https://stroustrup.com/glossary.html#Gaddress) or
0. TC++PL 2.3.3, 5.1, D&E 9.2.2.1, 11.4.4.

**policy object** - an
[object](https://stroustrup.com/glossary.html#Gobject) used to specify
guide decisions (e.g. the meaning of \"less than\") or implementation
details (e.g. how to access
[memory](https://stroustrup.com/glossary.html#Gmemory)) for an object or
an [algorithm](https://stroustrup.com/glossary.html#Galgorithm). See
also [trait](https://stroustrup.com/glossary.html#Gtrait),
[facet](https://stroustrup.com/glossary.html#Gfacet). TC++PL 13.4,
24.4.1.

**polymorphism** - providing a single
[interface](https://stroustrup.com/glossary.html#Ginterface) to entities
of different [type](https://stroustrup.com/glossary.html#Gtype)s.
[virtual](https://stroustrup.com/glossary.html#Gvirtual)
[function](https://stroustrup.com/glossary.html#Gfunction)s provide
dynamic (run-time) polymorphism through an interface provided by a [base
class](https://stroustrup.com/glossary.html#Gbase-class). [Overloaded
function](https://stroustrup.com/glossary.html#Goverloaded-function)s
and [template](https://stroustrup.com/glossary.html#Gtemplate)s provide
[static](https://stroustrup.com/glossary.html#Gstatic) (compile-time)
polymorphism. TC++PL 12.2.6, 13.6.1, D&E 2.9.

**postfix operator** - a [unary
operator](https://stroustrup.com/glossary.html#Gunary-operator) that
appears after its operand. For example var++.

**prefix operator** - a unary operato that appears before its operand.
For example, &var.

**preprocessor** - the part of a
[C++](https://stroustrup.com/glossary.html#GC++) implementation that
removes [comment](https://stroustrup.com/glossary.html#Gcomment)s,
performs [macro](https://stroustrup.com/glossary.html#Gmacro)
substitution and
[\#include](https://stroustrup.com/glossary.html#G#include)s. Avoid
using the preprocessor whenever possible. See also: macro, \#include,
inline, [const](https://stroustrup.com/glossary.html#Gconst),
[template](https://stroustrup.com/glossary.html#Gtemplate),
[namespace](https://stroustrup.com/glossary.html#Gnamespace). TC++PL
7.8, 9.2.1, D&E 18.

**priority_queue** - [standard
library](https://stroustrup.com/glossary.html#Gstandard-library)
[queue](https://stroustrup.com/glossary.html#Gqueue) where a priority
determines the order in which an
[element](https://stroustrup.com/glossary.html#Gelement) reaches the
head of the queue. TC++PL 17.3.3.

**private** - [access
control](https://stroustrup.com/glossary.html#Gaccess-control) keyword.
See [private
member](https://stroustrup.com/glossary.html#Gprivate-member), [private
base](https://stroustrup.com/glossary.html#Gprivate-base).

**private base** - a [base
class](https://stroustrup.com/glossary.html#Gbase-class) declared
[private](https://stroustrup.com/glossary.html#Gprivate) in a [derived
class](https://stroustrup.com/glossary.html#Gderived-class), so that the
base\'s [public
member](https://stroustrup.com/glossary.html#Gpublic-member)s are
accessible only from that derived class. TC++PL 15.3.2, D&E 2.10.

**private member** - a
[member](https://stroustrup.com/glossary.html#Gmember) accessible only
from its own [class](https://stroustrup.com/glossary.html#Gclass).
TC++PL 2.5.2, 10.2.2, 15.3, D&E 2.10.

**procedural programming** - programming using
[procedure](https://stroustrup.com/glossary.html#Gprocedure)s
([function](https://stroustrup.com/glossary.html#Gfunction)s) and data
structures (structs). See also: [data
abstraction](https://stroustrup.com/glossary.html#Gdata-abstraction),
[object-oriented
programming](https://stroustrup.com/glossary.html#Gobject-oriented-programming),
[generic
programming](https://stroustrup.com/glossary.html#Ggeneric-programming),
[multi-paradigm
programming](https://stroustrup.com/glossary.html#Gmulti-paradigm-programming).
TC++PL 2.3.

**procedure** - see
[function](https://stroustrup.com/glossary.html#Gfunction).

**program** - a set of [translation
unit](https://stroustrup.com/glossary.html#Gtranslation-unit)s complete
enough to be made executable by a
[linker](https://stroustrup.com/glossary.html#Glinker). TC++PL 9.4.

**programming language** - artificial language for expressing
[concept](https://stroustrup.com/glossary.html#Gconcept)s and general
[algorithm](https://stroustrup.com/glossary.html#Galgorithm)s in a way
that lends itself to solving problems using computers. There do not
appear to be a general consensus on what a programming language is or
should be. TC++PL 1.3.2, 2.1-2, D&E page 7.

**prohibiting operations** - operations can be rendered inaccessible by
declaring them [private](https://stroustrup.com/glossary.html#Gprivate);
in this way default operations, such as construction, destruction, and
copying can be disallowed for a
[class](https://stroustrup.com/glossary.html#Gclass). TC++PL 11.2.2, D&E
11.4.

**proprietary language** - language owned by an organization that is not
an official standards organization, such as
[ISO](https://stroustrup.com/glossary.html#GISO); usually manipulated by
its owner for commercial advantage.

**protected** - [access
control](https://stroustrup.com/glossary.html#Gaccess-control) keyword.
See [protected
member](https://stroustrup.com/glossary.html#Gprotected-member),
[protected base](https://stroustrup.com/glossary.html#Gprotected-base).

**protected base** - a [base
class](https://stroustrup.com/glossary.html#Gbase-class) declared
[protected](https://stroustrup.com/glossary.html#Gprotected) in a
[derived class](https://stroustrup.com/glossary.html#Gderived-class), so
that the base\'s [public](https://stroustrup.com/glossary.html#Gpublic)
and [protected
member](https://stroustrup.com/glossary.html#Gprotected-member)s are
accessible only in that derived class and classes derived from that.
TC++PL 15.3.2, D&E 13.9.

**protected member** - a
[member](https://stroustrup.com/glossary.html#Gmember) accessible only
from [class](https://stroustrup.com/glossary.html#Gclass)es derived from
its class. TC++PL 15.3.1, D&E 13.9.

**protection** - see
[encapsulation](https://stroustrup.com/glossary.html#Gencapsulation).

**protection model** - the mechanisms for [access
control](https://stroustrup.com/glossary.html#Gaccess-control). See
[public](https://stroustrup.com/glossary.html#Gpublic),
[private](https://stroustrup.com/glossary.html#Gprivate),
[protected](https://stroustrup.com/glossary.html#Gprotected),
[friend](https://stroustrup.com/glossary.html#Gfriend). TC++PL 15.3, D&E
2.10.

**public** - [access
control](https://stroustrup.com/glossary.html#Gaccess-control) keyword.
See [public
member](https://stroustrup.com/glossary.html#Gpublic-member), [public
base](https://stroustrup.com/glossary.html#Gpublic-base).

**public base** - a [base
class](https://stroustrup.com/glossary.html#Gbase-class) declared
[public](https://stroustrup.com/glossary.html#Gpublic) in a [derived
class](https://stroustrup.com/glossary.html#Gderived-class), so that the
base\'s [public
member](https://stroustrup.com/glossary.html#Gpublic-member)s are
accessible to the users of that derived class. TC++PL 15.3.2, D&E 2.3.

**public member** - a
[member](https://stroustrup.com/glossary.html#Gmember) accessible to all
users of a [class](https://stroustrup.com/glossary.html#Gclass). TC++PL
2.5.2, 10.2.2, 15.3, D&E 2.10.

**pure object-oriented language** - [programming
language](https://stroustrup.com/glossary.html#Gprogramming-language)
claiming to support only [object-oriented
programming](https://stroustrup.com/glossary.html#Gobject-oriented-programming).
[C++](https://stroustrup.com/glossary.html#GC++) is designed to support
several programming
[paradigm](https://stroustrup.com/glossary.html#Gparadigm)s, including
traditional C-style programming, [data
abstraction](https://stroustrup.com/glossary.html#Gdata-abstraction),
object-oriented programming, and [generic
programming](https://stroustrup.com/glossary.html#Ggeneric-programming).
For a longer explanation, read [Why C++ isn\'t just an object-oriented
programming language](https://stroustrup.com/oopsla.pdf). See also:
[hybrid
language](https://stroustrup.com/glossary.html#Ghybrid-language).

**pure virtual function**
-[virtual](https://stroustrup.com/glossary.html#Gvirtual)
[function](https://stroustrup.com/glossary.html#Gfunction) that must be
overridden in a [derived
class](https://stroustrup.com/glossary.html#Gderived-class). Indicated
by the curious [=0](https://stroustrup.com/glossary.html#G=0)
[syntax](https://stroustrup.com/glossary.html#Gsyntax). A pure virtual
function can be defined in the class where it is declared pure, but
needn\'t be and usually isn\'t. A class with at least one pure virtual
function is an [abstract
class](https://stroustrup.com/glossary.html#Gabstract-class). TC++PL
12.3. D&E 13.2.1.

**push_back()** - [member
function](https://stroustrup.com/glossary.html#Gmember-function) that
adds an [element](https://stroustrup.com/glossary.html#Gelement) at the
end of a standard
[container](https://stroustrup.com/glossary.html#Gcontainer), such as
[vector](https://stroustrup.com/glossary.html#Gvector), thereby
increasing the container\'s size by one.
[Example](https://stroustrup.com/bs_faq2.html#realloc). TC++PL 3.7.3,
16.3.5, E.3.4.

**put function** - see
[\< \<https://stroustrup.com/glossary.html\#G%3C%3C](%3C%20%3Chttps://stroustrup.com/glossary.html#G%3C%3C).

**qualified name** -[name](https://stroustrup.com/glossary.html#Gname)
qualified by the name of its enclosing
[class](https://stroustrup.com/glossary.html#Gclass) or
[namespace](https://stroustrup.com/glossary.html#Gnamespace) using the
[scope](https://stroustrup.com/glossary.html#Gscope) resolution
[operator](https://stroustrup.com/glossary.html#Goperator) ::. For
example, std::[vector](https://stroustrup.com/glossary.html#Gvector) or
::main. TC++PL 4.9.3, 8.2.1, 10.2.4, 15.2.1, 15.2.2, D&E 3.11.3.

**queue** - [standard
library](https://stroustrup.com/glossary.html#Gstandard-library)
first-in-first-out sequence. TC++PL 17.3.2.

**RAII** - see [resource acquisition is
initialization](https://stroustrup.com/glossary.html#Gresource-acquisition-is-initialization).

**random number generator**
-[function](https://stroustrup.com/glossary.html#Gfunction) or [function
object](https://stroustrup.com/glossary.html#Gfunction-object) producing
a series of pseudorandom numbers according to some distribution. TC++PL
22.7.

**raw memory** - see [uninitialized
memory](https://stroustrup.com/glossary.html#Guninitialized-memory).

**realloc()** - [C](https://stroustrup.com/glossary.html#GC) standard
allocation [function](https://stroustrup.com/glossary.html#Gfunction).
Use [vector](https://stroustrup.com/glossary.html#Gvector) and
[push_back()](https://stroustrup.com/glossary.html#Gpush_back())
instead.

**recursion** - a
[function](https://stroustrup.com/glossary.html#Gfunction) calling
itself, hopefully with different
[argument](https://stroustrup.com/glossary.html#Gargument)s so that the
recursion eventually ends with a call for which the function doesn\'t
call itself. See also:
[iteration](https://stroustrup.com/glossary.html#Giteration). TC++PL
7.1.1.

**reference** - an alternative
[name](https://stroustrup.com/glossary.html#Gname) for an
[object](https://stroustrup.com/glossary.html#Gobject) or a
[function](https://stroustrup.com/glossary.html#Gfunction). See also:
[operator
overloading](https://stroustrup.com/glossary.html#Goperator-overloading),
[call-by-reference](https://stroustrup.com/glossary.html#Gcall-by-reference).
TC++PL 5.4.1, D&E 3.7.

**regression testing** - systematically checking that a new version of a
[program](https://stroustrup.com/glossary.html#Gprogram) doesn\'t break
correct uses of a previous version of the program.

**reinterpret_cast** - a [type
conversion](https://stroustrup.com/glossary.html#Gtype-conversion)
operation that reinterprets the [raw
memory](https://stroustrup.com/glossary.html#Graw-memory) of an
[object](https://stroustrup.com/glossary.html#Gobject) as a
[value](https://stroustrup.com/glossary.html#Gvalue) of another type.
The result of a
reinterpret\_[cast](https://stroustrup.com/glossary.html#Gcast) can only
be portably used after being converted back into its original type. Use
only as a last resort. See also: cast. TC++PL 6.2.7, D&E 14.3.3.

**resource** - any entity that a
[program](https://stroustrup.com/glossary.html#Gprogram) acquires and
releases. Typical examples are [free
store](https://stroustrup.com/glossary.html#Gfree-store),
[file](https://stroustrup.com/glossary.html#Gfile)
[handle](https://stroustrup.com/glossary.html#Ghandle)s, threads,
sockets. See also: [resource acquisition is
initialization](https://stroustrup.com/glossary.html#Gresource-acquisition-is-initialization),
[exception
safety](https://stroustrup.com/glossary.html#Gexception-safety), [basic
guarantee](https://stroustrup.com/glossary.html#Gbasic-guarantee),
[resource
management](https://stroustrup.com/glossary.html#Gresource-management).
TC++PL 14.4, E.2-3 D&E 16.5.

**resource acquisition is initialization** - A simple technique for
handling [resource](https://stroustrup.com/glossary.html#Gresource)s in
[program](https://stroustrup.com/glossary.html#Gprogram)s using
[exception](https://stroustrup.com/glossary.html#Gexception)s. One of
the keys to [exception
safety](https://stroustrup.com/glossary.html#Gexception-safety).
[Example](https://stroustrup.com/bs_faq2.html#finally). TC++PL 14.4, E.3
D&E 16.5.

**resource leak** - programming error causing a
[resource](https://stroustrup.com/glossary.html#Gresource) not to be
released. See also: [resource acquisition is
initialization](https://stroustrup.com/glossary.html#Gresource-acquisition-is-initialization),
[basic
guarantee](https://stroustrup.com/glossary.html#Gbasic-guarantee).
TC++PL 14.4, E.2-3 D&E 16.5.

**resource management** - a way of acquiring and releasing a
[resource](https://stroustrup.com/glossary.html#Gresource), such as
[memory](https://stroustrup.com/glossary.html#Gmemory), thread, or
[file](https://stroustrup.com/glossary.html#Gfile). See also: [resource
acquisition is
initialization](https://stroustrup.com/glossary.html#Gresource-acquisition-is-initialization),
[auto_ptr](https://stroustrup.com/glossary.html#Gauto_ptr),
[vector](https://stroustrup.com/glossary.html#Gvector). TC++PL 14.4, D&E
10.4.

**resumption semantics** - In some languages, but not
[C++](https://stroustrup.com/glossary.html#GC++), an [exception
handler](https://stroustrup.com/glossary.html#Gexception-handler) can
respond by telling the thrower to resume ([\`just carry on as if the
problem hadn\'t happened\"). This looks like a good idea in some cases,
but in general leads to contorted code because of unfortunate
dependencies between separate levels of \`abstraction
\<https://stroustrup.com/glossary.html\#Gabstraction\>]{.title-ref}\_\_.
See also: [termination
semantics](https://stroustrup.com/glossary.html#Gtermination-semantics).
TC++PL 14.4.5, D&E 16.6.

**return type relaxation** - Allowing a
[virtual](https://stroustrup.com/glossary.html#Gvirtual)
[function](https://stroustrup.com/glossary.html#Gfunction) returning a
B\* or a B& to be overridden by a function with a return
[type](https://stroustrup.com/glossary.html#Gtype) D\* or D&, provided B
is a [public base](https://stroustrup.com/glossary.html#Gpublic-base) of
D. See also:
[overriding](https://stroustrup.com/glossary.html#Goverriding). TC++PL
15.6.2, D&E 13.7.

**reverse iterator**
-[iterator](https://stroustrup.com/glossary.html#Giterator) for
iterating through a sequence in reverse order. TC++PL 19.2.5.

**Ritchie** - Dennis Ritchie is the designer and original implementer of
[C](https://stroustrup.com/glossary.html#GC). Co-author of
[Kernighan](https://stroustrup.com/glossary.html#GKernighan) & Ritchie:
\"The C [programming
Language](https://stroustrup.com/glossary.html#Gprogramming-language)\".

**RTFM** - \"Read The Manual\" (The \'F\' is silent). Usually a very
good idea.

**RTTI** - see [Run Time Type
Information](https://stroustrup.com/glossary.html#Grun-time-type-information).

**run time type information** - information about a
[type](https://stroustrup.com/glossary.html#Gtype) available at run time
through operations on an
[object](https://stroustrup.com/glossary.html#Gobject) of that type. See
also:
[dynamic_cast](https://stroustrup.com/glossary.html#Gdynamic_cast),
[typeid()](https://stroustrup.com/glossary.html#Gtypeid()), and
[type_info](https://stroustrup.com/glossary.html#Gtype_info). TC++PL
15.4, D&E 14.2.

**rvalue** - an
[expression](https://stroustrup.com/glossary.html#Gexpression) that may
appear on the right-hand side of an assignment, but not of the left-hand
side; for example, 7. D&E 3.7.1.

**scope** - a region of source text delimited by curly braces: { \... },
a list of [function](https://stroustrup.com/glossary.html#Gfunction) or
[template
parameter](https://stroustrup.com/glossary.html#Gtemplate-parameter)s,
or all of a [translation
unit](https://stroustrup.com/glossary.html#Gtranslation-unit) outside
other scopes. See also:
[block](https://stroustrup.com/glossary.html#Gblock),
[namespace](https://stroustrup.com/glossary.html#Gnamespace), [global
scope](https://stroustrup.com/glossary.html#Gglobal-scope). TC++PL
2.9.4.

**SDE** - [Software](https://stroustrup.com/glossary.html#Gsoftware)
Development Environment. An environment of editors,
[compiler](https://stroustrup.com/glossary.html#Gcompiler)s, tools,
libraries, etc. used by a programmer to produce software. There are many
SDEs for [C++](https://stroustrup.com/glossary.html#GC++), but no
standard SDE.

**selection-statement**
-[if-statement](https://stroustrup.com/glossary.html#Gif-statement) or
[switch-statement](https://stroustrup.com/glossary.html#Gswitch-statement).
TC++PL 6.3.2.

**self** - see [this](https://stroustrup.com/glossary.html#Gthis#).

**semantics** - the rules specifying the meaning of a syntactically
correct construct of a
[program](https://stroustrup.com/glossary.html#Gprogram). For example,
specifying the actions taken to perform a
[for-statement](https://stroustrup.com/glossary.html#Gfor-statement) or
an [object](https://stroustrup.com/glossary.html#Gobject) definition.

**separate compilation** - the practice of compiling parts of a
[program](https://stroustrup.com/glossary.html#Gprogram), called
[translation
unit](https://stroustrup.com/glossary.html#Gtranslation-unit)s,
separately and then later linking the results together using a
[linker](https://stroustrup.com/glossary.html#Glinker). This is
essential for larger programs. See also:
[linkage](https://stroustrup.com/glossary.html#Glinkage), [header
file](https://stroustrup.com/glossary.html#Gheader-file), [one
definition
rule](https://stroustrup.com/glossary.html#Gone-definition-rule). TC++PL
2.4.1, 9.1. D&E 2.5.

**separately compiled** - see [separate
compilation](https://stroustrup.com/glossary.html#Gseparate-compilation).

**sequence adapter** - a
[class](https://stroustrup.com/glossary.html#Gclass) that provides a
modified [interface](https://stroustrup.com/glossary.html#Ginterface) to
another. For example, a [standard
library](https://stroustrup.com/glossary.html#Gstandard-library)
[stack](https://stroustrup.com/glossary.html#Gstack) is an
[adapter](https://stroustrup.com/glossary.html#Gadapter) for a more
flexible data structure such as a
[vector](https://stroustrup.com/glossary.html#Gvector). See also:
adapter, stack, [queue](https://stroustrup.com/glossary.html#Gqueue),
[priority_queue](https://stroustrup.com/glossary.html#Gpriority_queue).
TC++PL 17.3.

**set** - [standard
library](https://stroustrup.com/glossary.html#Gstandard-library)
associative [container](https://stroustrup.com/glossary.html#Gcontainer)

**short** - integer of a size less than or equal to the size of an int.
TC++PL 4.4.

**sibling class** - two
[class](https://stroustrup.com/glossary.html#Gclass)es are siblings if a
class is (directly or indirectly) derived from them both and one is not
derived from the other. Note that this is a rather inclusive definition
of \"sibling class\" in that is does not require that the siblings have
the same immediate [derived
class](https://stroustrup.com/glossary.html#Gderived-class) (I didn\'t
want to introduce a notion of \"cousin classes\"). See also:
[dynamic_cast](https://stroustrup.com/glossary.html#Gdynamic_cast),
[crosscast](https://stroustrup.com/glossary.html#Gcrosscast).

**signature** - the set of
[parameter](https://stroustrup.com/glossary.html#Gparameter)
[type](https://stroustrup.com/glossary.html#Gtype)s for a
[function](https://stroustrup.com/glossary.html#Gfunction); that is, the
function\'s type ignoring its return type. This is a confusingly
specialized definition compared to other [programming
language](https://stroustrup.com/glossary.html#Gprogramming-language)s
where \"signature\" means \"function type\".

**Simula** - ancestor of
[C++](https://stroustrup.com/glossary.html#GC++) designed by Ole-Johan
Dahl and Kristen Nygaard; the source of the C++
[class](https://stroustrup.com/glossary.html#Gclass)
[concept](https://stroustrup.com/glossary.html#Gconcept). TC++PL 1.4,
2.6.2, D&E 1.1, 3.1.

**single dispatch** - the technique of choosing the [member
function](https://stroustrup.com/glossary.html#Gmember-function) to be
invoked based on the
[object](https://stroustrup.com/glossary.html#Gobject) used in the call.
See also: [double
dispatch](https://stroustrup.com/glossary.html#Gdouble-dispatch).

**size of an object** - the number of
[byte](https://stroustrup.com/glossary.html#Gbyte)s required to
represent an [object](https://stroustrup.com/glossary.html#Gobject). See
also [sizeof](https://stroustrup.com/glossary.html#Gsizeof),
[alignment](https://stroustrup.com/glossary.html#Galignment). TC++PL
4.6.

**sizeof** -[operator](https://stroustrup.com/glossary.html#Goperator)
yielding the [size of an
object](https://stroustrup.com/glossary.html#Gsize-of-an-object).

**smart pointer** - [user-defined
type](https://stroustrup.com/glossary.html#Guser-defined-type) providing
[operator](https://stroustrup.com/glossary.html#Goperator)s like a
[function](https://stroustrup.com/glossary.html#Gfunction), such as \*
and ++, and with a
[semantics](https://stroustrup.com/glossary.html#Gsemantics) similar to
[pointer](https://stroustrup.com/glossary.html#Gpointer)s. See also:
[iterator](https://stroustrup.com/glossary.html#Giterator). Sometimes
smart a pointer is called a
[handle](https://stroustrup.com/glossary.html#Ghandle). TC++PL 11.10-11,
13.6.3.1, 19.3, 25.7, D&E 11.5.1

**software** - a
[collection](https://stroustrup.com/glossary.html#Gcollection) of
[program](https://stroustrup.com/glossary.html#Gprogram)s

**sort()** - [standard
library](https://stroustrup.com/glossary.html#Gstandard-library)
[algorithm](https://stroustrup.com/glossary.html#Galgorithm) for sorting
a random access sequence, such as a
[vector](https://stroustrup.com/glossary.html#Gvector) or an
[array](https://stroustrup.com/glossary.html#Garray). [Example comparing
sort() to qsort()](https://stroustrup.com/bs_faq2.html#sort). TC++PL
18.7.1.

**source file** - [.c
file](https://stroustrup.com/glossary.html#G.c-file) or
[header](https://stroustrup.com/glossary.html#Gheader).

**specialization** - a
[class](https://stroustrup.com/glossary.html#Gclass) or
[function](https://stroustrup.com/glossary.html#Gfunction) generated
from a [template](https://stroustrup.com/glossary.html#Gtemplate) by
supplying a complete set of [template
argument](https://stroustrup.com/glossary.html#Gtemplate-argument)s.
TC++PL 13.2.2, 13.5, D&E 15.10.3.

**stack** - (1) [memory](https://stroustrup.com/glossary.html#Gmemory)
used to hold local
[variable](https://stroustrup.com/glossary.html#Gvariable)s for a
[function](https://stroustrup.com/glossary.html#Gfunction). (2)
[standard
library](https://stroustrup.com/glossary.html#Gstandard-library)
first-in-last-out sequence. TC++PL 10.4.3, 17.3.1, D&E 2.3, 3.9.

**Standard C++** - [C++](https://stroustrup.com/glossary.html#GC++) as
defined by [ISO](https://stroustrup.com/glossary.html#GISO).

**standard header**
-[header](https://stroustrup.com/glossary.html#Gheader) for [standard
library](https://stroustrup.com/glossary.html#Gstandard-library)
facility. Included using the
\"[\#include](https://stroustrup.com/glossary.html#G#include)\< \...
\>\" syntax. TC++PL 9.2.2, 16.1.2.

**standard library** - The library defined in the [C++
standard](https://stroustrup.com/glossary.html#GC++-standard). Contains
[string](https://stroustrup.com/glossary.html#Gstring)s, [stream
I/O](https://stroustrup.com/glossary.html#Gstream-I/O), a framework of
[container](https://stroustrup.com/glossary.html#Gcontainer)s and
[algorithm](https://stroustrup.com/glossary.html#Galgorithm)s, support
for numerical computation, support for internationalization, the [C
standard
library](https://stroustrup.com/glossary.html#GC-standard-library), and
some language support facilities. See also:
[complex](https://stroustrup.com/glossary.html#Gcomplex),
[valarray](https://stroustrup.com/glossary.html#Gvalarray),
[locale](https://stroustrup.com/glossary.html#Glocale). TC++PL 16-22, D,
E.

**standards committee** - see [C++ standards
committees](https://stroustrup.com/glossary.html#GC++-standards-committees).

**statement** - the basic unit controlling the execution flow in a
[function](https://stroustrup.com/glossary.html#Gfunction), such as
[if-statement](https://stroustrup.com/glossary.html#Gif-statement),
[while-statement](https://stroustrup.com/glossary.html#Gwhile-statement),
do-statement,
[switch-statement](https://stroustrup.com/glossary.html#Gswitch-statement),
[expression](https://stroustrup.com/glossary.html#Gexpression)
statement, and
[declaration](https://stroustrup.com/glossary.html#Gdeclaration). TC++PL
6.3.

**static** - (1) keyword used to declare a
[class](https://stroustrup.com/glossary.html#Gclass)
[member](https://stroustrup.com/glossary.html#Gmember) static; meaning
allocated in [static
memory](https://stroustrup.com/glossary.html#Gstatic-memory). For a
[member
function](https://stroustrup.com/glossary.html#Gmember-function), this
implies that there is no this
[pointer](https://stroustrup.com/glossary.html#Gpointer). (2) keyword
used to specify that a local
[variable](https://stroustrup.com/glossary.html#Gvariable) should be
allocated in static memory. (3) deprecated: keyword used to specify that
a global [name](https://stroustrup.com/glossary.html#Gname) should not
be visible from other [translation
unit](https://stroustrup.com/glossary.html#Gtranslation-unit)s. TC++PL
7.1.2, 10.2.4, 10.4.8-9.

**static member**
-[member](https://stroustrup.com/glossary.html#Gmember) of a
[class](https://stroustrup.com/glossary.html#Gclass) for which there is
only one copy for the whole
[program](https://stroustrup.com/glossary.html#Gprogram) rather than one
per [object](https://stroustrup.com/glossary.html#Gobject). TC++PL
10.2.4, D&E 13.4.

**static member function** - a [member
function](https://stroustrup.com/glossary.html#Gmember-function) that
need not be called for an
[object](https://stroustrup.com/glossary.html#Gobject) of the
[class](https://stroustrup.com/glossary.html#Gclass). TC++PL 10.2.4, D&E
13.4.

**static memory**
-[memory](https://stroustrup.com/glossary.html#Gmemory) allocated by the
[linker](https://stroustrup.com/glossary.html#Glinker). TC++PL 10.4.3,
D&E 2.3, 2.11.1, 3.9, 11.4.2.

**static type** - the [type](https://stroustrup.com/glossary.html#Gtype)
of an [object](https://stroustrup.com/glossary.html#Gobject) as known to
the [compiler](https://stroustrup.com/glossary.html#Gcompiler) based on
its [declaration](https://stroustrup.com/glossary.html#Gdeclaration).
See also: [dynamic
type](https://stroustrup.com/glossary.html#Gdynamic-type).

**static type safety** - [type
safety](https://stroustrup.com/glossary.html#Gtype-safety) enforced
before a [program](https://stroustrup.com/glossary.html#Gprogram) starts
executing (at compile time or at
[static](https://stroustrup.com/glossary.html#Gstatic) link time).

**static variable**
-[variable](https://stroustrup.com/glossary.html#Gvariable) allocated in
[static memory](https://stroustrup.com/glossary.html#Gstatic-memory).
TC++PL 7.1.2, 10.2.4, 10.4.3, D&E 3.9.

**static_cast** - a [type
conversion](https://stroustrup.com/glossary.html#Gtype-conversion)
operation that converts between related types, such as
[pointer](https://stroustrup.com/glossary.html#Gpointer) types within a
[class](https://stroustrup.com/glossary.html#Gclass)
[hierarchy](https://stroustrup.com/glossary.html#Ghierarchy) and between
[enumeration](https://stroustrup.com/glossary.html#Genumeration)s and
[integral type](https://stroustrup.com/glossary.html#Gintegral-type)s.
See also: [cast](https://stroustrup.com/glossary.html#Gcast),
[dynamic_cast](https://stroustrup.com/glossary.html#Gdynamic_cast).
TC++PL 6.2.7, 15.4.2.1, D&E 14.3.2.

**Stepanov** - Alex Stepanov is the original designer and implementer of
the [STL](https://stroustrup.com/glossary.html#GSTL). D&E 11.15.2.

**STL** - the \"Standard
[Template](https://stroustrup.com/glossary.html#Gtemplate) Library\" by
Alex [Stepanov](https://stroustrup.com/glossary.html#GStepanov), which
became the basis for the
[container](https://stroustrup.com/glossary.html#Gcontainer)s,
[algorithm](https://stroustrup.com/glossary.html#Galgorithm)s, and
[iterator](https://stroustrup.com/glossary.html#Giterator)s part of the
[ISO C++](https://stroustrup.com/glossary.html#GISO-C++) standard
library. TC++PL 15-19.

**strcmp()** - a [C](https://stroustrup.com/glossary.html#GC)-style
[standard
library](https://stroustrup.com/glossary.html#Gstandard-library)
[function](https://stroustrup.com/glossary.html#Gfunction) for comparing
[C-style string](https://stroustrup.com/glossary.html#GC-style-string)s.

**stream** - see
[iostream](https://stroustrup.com/glossary.html#Giostream).

**stream I/O** - see
[iostream](https://stroustrup.com/glossary.html#Giostream).

**string** - standard-library
[type](https://stroustrup.com/glossary.html#Gtype) representing a
sequence of characters, support by convenient
[operator](https://stroustrup.com/glossary.html#Goperator)s, such as
[==](https://stroustrup.com/glossary.html#G==) and
[+=](https://stroustrup.com/glossary.html#G+=). The general form of of
strings,
[basic_string](https://stroustrup.com/glossary.html#Gbasic_string),
supports strings of different kinds of characters. TC++PL 3.5, 20.

**string stream**
-[stream](https://stroustrup.com/glossary.html#Gstream) attached to a
[string](https://stroustrup.com/glossary.html#Gstring). See also,
[stringstream](https://stroustrup.com/glossary.html#Gstringstream),
[istringstream](https://stroustrup.com/glossary.html#Gistringstream),
[ostringstream](https://stroustrup.com/glossary.html#Gostringstream).
TC++PL 21.5.3.

**stringstream** - a [string
stream](https://stroustrup.com/glossary.html#Gstring-stream) for
[input](https://stroustrup.com/glossary.html#Ginput) and
[output](https://stroustrup.com/glossary.html#Goutput).

**strong guarantee** - the guarantee that an
[exception](https://stroustrup.com/glossary.html#Gexception) thrown by
an operation leaves every
[object](https://stroustrup.com/glossary.html#Gobject) in the state in
which it was before the start of the operation. Builds on the [basic
guarantee](https://stroustrup.com/glossary.html#Gbasic-guarantee). See
also [exception
safety](https://stroustrup.com/glossary.html#Gexception-safety),
[nothrow
guarantee](https://stroustrup.com/glossary.html#Gnothrow-guarantee), and
basic guarantee. TC++PL E.2.

**Stroustrup** - see [Bjarne
Stroustrup](https://stroustrup.com/glossary.html#GBjarne-Stroustrup).

**strstream** - deprecated ancestor of
[stringstream](https://stroustrup.com/glossary.html#Gstringstream).

**struct** - [class](https://stroustrup.com/glossary.html#Gclass) with
[member](https://stroustrup.com/glossary.html#Gmember)s
[public](https://stroustrup.com/glossary.html#Gpublic) by default. Most
often used for data structures without [member
function](https://stroustrup.com/glossary.html#Gmember-function)s or
class [invariant](https://stroustrup.com/glossary.html#Ginvariant)s, as
in [C](https://stroustrup.com/glossary.html#GC)-style programming.
TC++PL 5.7, 10.2.8, D&E 3.5.1.

**subclass** - a [derived
class](https://stroustrup.com/glossary.html#Gderived-class).

**subtype** - see [derived
class](https://stroustrup.com/glossary.html#Gderived-class). See also:
[public base](https://stroustrup.com/glossary.html#Gpublic-base).

**suffix operator** - a [postfix
operator](https://stroustrup.com/glossary.html#Gpostfix-operator).

**superclass** - a [base
class](https://stroustrup.com/glossary.html#Gbase-class).

**switch-statement**
-[statement](https://stroustrup.com/glossary.html#Gstatement) selecting
among many alternatives based on an integer
[value](https://stroustrup.com/glossary.html#Gvalue). TC++PL 6.3.2.

**syntax** - the set of gramatical rules specifying how the text of a
[program](https://stroustrup.com/glossary.html#Gprogram) must be
composed. For example, specifying the form of a
[declaration](https://stroustrup.com/glossary.html#Gdeclaration) or the
form of a
[for-statement](https://stroustrup.com/glossary.html#Gfor-statement).

**TC++PL** - [Bjarne
Stroustrup](https://stroustrup.com/glossary.html#GBjarne-Stroustrup):
[The C++ Programming Language (Special
Edition)](https://stroustrup.com/3rd.html). Addison Wesley. 2000.

**template** - [class](https://stroustrup.com/glossary.html#Gclass) or
[function](https://stroustrup.com/glossary.html#Gfunction) parameterized
by a set of [type](https://stroustrup.com/glossary.html#Gtype)s,
[value](https://stroustrup.com/glossary.html#Gvalue)s, or templates. See
also [template
instantiation](https://stroustrup.com/glossary.html#Gtemplate-instantiation),
[specialization](https://stroustrup.com/glossary.html#Gspecialization),
[template class](https://stroustrup.com/glossary.html#Gtemplate-class),
[template
function](https://stroustrup.com/glossary.html#Gtemplate-function).
TC++PL 2.7, 13, D&E 15.

**template argument** - an
[argument](https://stroustrup.com/glossary.html#Gargument) to a
[template](https://stroustrup.com/glossary.html#Gtemplate).

**template argument constraint** - see
[constraint](https://stroustrup.com/glossary.html#Gconstraint).

**template class** -[class](https://stroustrup.com/glossary.html#Gclass)
parameterized by [type](https://stroustrup.com/glossary.html#Gtype)s,
[value](https://stroustrup.com/glossary.html#Gvalue)s, or
[template](https://stroustrup.com/glossary.html#Gtemplate)s. The
[template
argument](https://stroustrup.com/glossary.html#Gtemplate-argument)s
necessary to identify the class to be generated for the [class
template](https://stroustrup.com/glossary.html#Gclass-template) must be
provided where a template class is used. For example
\"[vector](https://stroustrup.com/glossary.html#Gvector)\<[int](https://stroustrup.com/glossary.html#Gint)\>
v;\" generates a vector of ints from the vector template. See also
template. TC++PL 13.2, D&E 15.3.

**template definition**
-[declaration](https://stroustrup.com/glossary.html#Gdeclaration) of a
[template class](https://stroustrup.com/glossary.html#Gtemplate-class)
or of a [template
function](https://stroustrup.com/glossary.html#Gtemplate-function)
including a [function
body](https://stroustrup.com/glossary.html#Gfunction-body).

**template function**
-[function](https://stroustrup.com/glossary.html#Gfunction)
parameterized by [type](https://stroustrup.com/glossary.html#Gtype)s,
[value](https://stroustrup.com/glossary.html#Gvalue)s, or
[template](https://stroustrup.com/glossary.html#Gtemplate)s. The
function to be generated from a template function can usually be deduced
from the [function
argument](https://stroustrup.com/glossary.html#Gfunction-argument)s in a
call. For example, \"sort(b,e)\" generates
\"sort\<[vector](https://stroustrup.com/glossary.html#Gvector)::[iterator](https://stroustrup.com/glossary.html#Giterator)\>(b,e)\"
from the sort() template function if b and e are standard library vector
iterators. If a template argument cannot be deduced, it must be provided
through explicit qualification. See also template. TC++PL 13,3, D&E
15.6.

**template instantiation** - the process of creating a
[specialization](https://stroustrup.com/glossary.html#Gspecialization)
from a [template](https://stroustrup.com/glossary.html#Gtemplate).
TC++PL 13.2.2, D&E 15.10.

**template parameter** - a
[parameter](https://stroustrup.com/glossary.html#Gparameter) of a
[template](https://stroustrup.com/glossary.html#Gtemplate).

**terminate()** - If an
[exception](https://stroustrup.com/glossary.html#Gexception) is thrown
but no [handler](https://stroustrup.com/glossary.html#Ghandler) is
found, terminate() is called. By default, terminate() terminates the
[program](https://stroustrup.com/glossary.html#Gprogram). If program
termination is unacceptable, a user can provide an alternative
terminate() [function](https://stroustrup.com/glossary.html#Gfunction).
If you are worried about [uncaught
exception](https://stroustrup.com/glossary.html#Guncaught-exception)s,
make the body of [main()](https://stroustrup.com/glossary.html#Gmain())
a [try-block](https://stroustrup.com/glossary.html#Gtry-block). TC++PL
14.7.

**termination semantics** - a somewhat ominous terminology for the idea
that throwing an
[exception](https://stroustrup.com/glossary.html#Gexception)
\"terminates\" an operation and returns through the
[function](https://stroustrup.com/glossary.html#Gfunction) call chain to
a [handler](https://stroustrup.com/glossary.html#Ghandler). The handler
can initiate any [error
handling](https://stroustrup.com/glossary.html#Gerror-handling) it
likes, including calling the function that caused the exception again
(presumably after fixing the problem that caused the problem). What a
handler can\'t do is simply tell the thrower to just carry on; by the
time the handler is invoked we have returned from the
[block](https://stroustrup.com/glossary.html#Gblock)/function that threw
and all blocks/functions that led to it from the handler\'s
[try-block](https://stroustrup.com/glossary.html#Gtry-block). See also:
[resumption
semantics](https://stroustrup.com/glossary.html#Gresumption-semantics).
TC++PL 14.4.5, D&E 16.6.

**ternary operator** - an
[operator](https://stroustrup.com/glossary.html#Goperator) taking three
operands, such as ?:.

**testing** - systematically verifying that a
[program](https://stroustrup.com/glossary.html#Gprogram) meets its
specification and systematically searching for error.

**this** - [pointer](https://stroustrup.com/glossary.html#Gpointer) to
the [object](https://stroustrup.com/glossary.html#Gobject) for which a
[non-static
member](https://stroustrup.com/glossary.html#Gnon-static-member)
function is called. TC++PL 10.2.7, D&E 2.5.2.

**throw** - operation for interrupting the normal flow of control and
returning to an appropriate [exception
handler](https://stroustrup.com/glossary.html#Gexception-handler)
identifyed by the [type](https://stroustrup.com/glossary.html#Gtype) of
the exception throw. See also:
[catch](https://stroustrup.com/glossary.html#Gcatch), [exception
handling](https://stroustrup.com/glossary.html#Gexception-handling).
TC++PL 8.3.1, 14.3, D&E 16.3.

**trait** - a small [policy
object](https://stroustrup.com/glossary.html#Gpolicy-object), typically
used to describe aspects of a
[type](https://stroustrup.com/glossary.html#Gtype). For example,
[iterator](https://stroustrup.com/glossary.html#Giterator)\_trait
specifies the types resulting from operations on an iterator T. TC++PL
19.2.2.

**translation unit** - a part of a
[program](https://stroustrup.com/glossary.html#Gprogram) that can be
[separately
compiled](https://stroustrup.com/glossary.html#Gseparately-compiled).
TC++PL 9.1.

**trigraph** - alternative representation for
[C++](https://stroustrup.com/glossary.html#GC++) representation
characters that doesn\'t exist in every national [character
set](https://stroustrup.com/glossary.html#Gcharacter-set), such as {, },
\[, \], and \#: ??\<, ??\>, ??(, ??), and ??=. TC++PL C.3.1.

**true** - [bool](https://stroustrup.com/glossary.html#Gbool)
[value](https://stroustrup.com/glossary.html#Gvalue); converts to 1.
TC++PL 4.2, D&E 11.7.2.

**try** - keyword used to start a
[try-block](https://stroustrup.com/glossary.html#Gtry-block).

**try-block** - a [block](https://stroustrup.com/glossary.html#Gblock),
prefixed by the keyword
[try](https://stroustrup.com/glossary.html#Gtry#), specifying
[handler](https://stroustrup.com/glossary.html#Ghandler)s for
[exception](https://stroustrup.com/glossary.html#Gexception)s. See also:
[catch](https://stroustrup.com/glossary.html#Gcatch), [exception
handling](https://stroustrup.com/glossary.html#Gexception-handling).
TC++PL 8.3.1,14.3, D&E 16.3.

**two-phase lookup** - a somewhat complicated mechanism used in
compilation of
[template](https://stroustrup.com/glossary.html#Gtemplate)s.
[Name](https://stroustrup.com/glossary.html#Gname)s that do not depend
on a [template
parameter](https://stroustrup.com/glossary.html#Gtemplate-parameter) are
looked up (and bound) early, i.e., when the template [template
definition](https://stroustrup.com/glossary.html#Gtemplate-definition)
is first seen (\"phase 1 lookup\"). Names that depend on a template
parameter are looked up late, i.e. during template
[instantiation](https://stroustrup.com/glossary.html#Ginstantiation)
(\"phase 2 lookup\") so that the lookup can find names relating to
actual [template
argument](https://stroustrup.com/glossary.html#Gtemplate-argument)s.
TC++PL C::13.8.

**type** - a [built-in
type](https://stroustrup.com/glossary.html#Gbuilt-in-type) or a
[user-defined
type](https://stroustrup.com/glossary.html#Guser-defined-type). A type
defines the proper use of a
[name](https://stroustrup.com/glossary.html#Gname) or an
[expression](https://stroustrup.com/glossary.html#Gexpression). TC++PL
2.3.1, 4.1.

**type checking** - the process of checking that every
[expression](https://stroustrup.com/glossary.html#Gexpression) is used
according to its [type](https://stroustrup.com/glossary.html#Gtype). the
[compiler](https://stroustrup.com/glossary.html#Gcompiler) checks every
expression based on the declared types of the
[name](https://stroustrup.com/glossary.html#Gname)s involved. TC++PL
7.2-3, 24.2.3, D&E 2.3, 2.6, 3.10, 3.15, 9.2.2.1.

**type conversion** - producing a
[value](https://stroustrup.com/glossary.html#Gvalue) of one
[type](https://stroustrup.com/glossary.html#Gtype) from a value of
another type. A type
[conversion](https://stroustrup.com/glossary.html#Gconversion) can be an
implicit conversion or an
[explicit](https://stroustrup.com/glossary.html#Gexplicit) conversion.
See also: [user-defined type
conversion](https://stroustrup.com/glossary.html#Guser-defined-type-conversion),
[cast](https://stroustrup.com/glossary.html#Gcast). TC++PL 6.2.7.

**type safety** - the property that an
[object](https://stroustrup.com/glossary.html#Gobject) can be accessed
only according to its definition.
[C++](https://stroustrup.com/glossary.html#GC++) approximates this
ideal. A programmer can violate
[type](https://stroustrup.com/glossary.html#Gtype) safety by explicitly
using a [cast](https://stroustrup.com/glossary.html#Gcast), by using an
uninitialized
[variable](https://stroustrup.com/glossary.html#Gvariable), by using a
[pointer](https://stroustrup.com/glossary.html#Gpointer) that doesn\'t
point to an object, by accessing beyond the end of an
[array](https://stroustrup.com/glossary.html#Garray), and by misusing a
[union](https://stroustrup.com/glossary.html#Gunion). For low-level
systems code, it can be necessary to violate type safety (e.g. to write
out the [byte](https://stroustrup.com/glossary.html#Gbyte)
representation of some objects), but generally type safety must be
preserved for a program to be correct and maintainable.

**type system** - the set of rules for how
[object](https://stroustrup.com/glossary.html#Gobject)s can be used
according to their [type](https://stroustrup.com/glossary.html#Gtype)s.
See also: [type
checking](https://stroustrup.com/glossary.html#Gtype-checking).

**typedef** - synonym for some
[type](https://stroustrup.com/glossary.html#Gtype) declared using the
keyword **typedef**.

**typeid()** -[operator](https://stroustrup.com/glossary.html#Goperator)
returning basic [type](https://stroustrup.com/glossary.html#Gtype)
information. TC++PL 15.4.4, D&E 14.2.5.

**typename** - (1) an alternative to
\"[class](https://stroustrup.com/glossary.html#Gclass)\" when declaring
[template
argument](https://stroustrup.com/glossary.html#Gtemplate-argument)s; for
example, \"template\<typename T\> void f(T);\" (2) a way of telling a
compiler that a name is meant to name a type in template code; for
example \"template\<class T\> void f(T a) { typename T::diff_type x = 0;
\... }\". TC++PL C::13.5.

**type_info** - [class](https://stroustrup.com/glossary.html#Gclass)
containing basic [run time type
information](https://stroustrup.com/glossary.html#Grun-time-type-information).
TC++PL 15.4.4, D&E 14.2.5.1.

**unary operator** - an
[operator](https://stroustrup.com/glossary.html#Goperator) taking one
operand, such as ! and unary \*.

**uncaught exception**
-[Exception](https://stroustrup.com/glossary.html#Gexception) for which
no [handler](https://stroustrup.com/glossary.html#Ghandler) was found.
Invokes
[terminate()](https://stroustrup.com/glossary.html#Gterminate()), which
by default terminates the
[program](https://stroustrup.com/glossary.html#Gprogram). TC++PL 14.7.

**undefined** - an aspect of
[C++](https://stroustrup.com/glossary.html#GC++)\'s
[semantics](https://stroustrup.com/glossary.html#Gsemantics) for which
no reasonable behavior is required. An example is dereferencing a
[pointer](https://stroustrup.com/glossary.html#Gpointer) with the
[value](https://stroustrup.com/glossary.html#Gvalue)
[zero](https://stroustrup.com/glossary.html#Gzero). Avoid undefined
behavior. See also: [implementation
defined](https://stroustrup.com/glossary.html#Gimplementation-defined).
TC++PL C.2.

**uninitialized memory**
-[memory](https://stroustrup.com/glossary.html#Gmemory) that hasn\'t
been initialized to hold a specific
[value](https://stroustrup.com/glossary.html#Gvalue) of a
[type](https://stroustrup.com/glossary.html#Gtype). TC++PL 19.4.4.

**union** - a [struct](https://stroustrup.com/glossary.html#Gstruct)
with all [member](https://stroustrup.com/glossary.html#Gmember)s
allocated at the same offset within an
[object](https://stroustrup.com/glossary.html#Gobject). The language
does not guarantee [type
safety](https://stroustrup.com/glossary.html#Gtype-safety) for all uses
of unions. Primarily used to save space. TC++PL C.8.2.

**upcast** - a [cast](https://stroustrup.com/glossary.html#Gcast) from a
[derived class](https://stroustrup.com/glossary.html#Gderived-class) to
one of its bases. See also:
[downcast](https://stroustrup.com/glossary.html#Gdowncast),
[crosscast](https://stroustrup.com/glossary.html#Gcrosscast). TC++PL
15.4.

**user-defined type**
-[Class](https://stroustrup.com/glossary.html#Gclass) or
[enumeration](https://stroustrup.com/glossary.html#Genumeration). A
programmer can define meanings for
[operator](https://stroustrup.com/glossary.html#Goperator)s for
user-defined [type](https://stroustrup.com/glossary.html#Gtype)s. See
also: [operator
overloading](https://stroustrup.com/glossary.html#Goperator-overloading).
TC++PL 6.2, 11, D&E 3.6, 11.7.1.

**user-defined type conversion** - a user can define
[conversion](https://stroustrup.com/glossary.html#Gconversion)s either
as [constructor](https://stroustrup.com/glossary.html#Gconstructor)s or
[conversion
operator](https://stroustrup.com/glossary.html#Gconversion-operator)s.
These conversions are applied explicitly or implicitly just like
built-in conversions. TC++PL 11.3.5, 11.4, D&E 3.6.1, 3.6.3.

**using** - see
[using-directive](https://stroustrup.com/glossary.html#Gusing-directive)
and
[using-declaration](https://stroustrup.com/glossary.html#Gusing-declaration).

**using-declaration**
-[declaration](https://stroustrup.com/glossary.html#Gdeclaration) of a
local synonym for a [name](https://stroustrup.com/glossary.html#Gname)
in another [namespace](https://stroustrup.com/glossary.html#Gnamespace)
or [class](https://stroustrup.com/glossary.html#Gclass). [Example of
using-declaration used to simplify
overloading](https://stroustrup.com/bs_faq2.html#overloadderived). See
also: overloading, [argument-based
lookup](https://stroustrup.com/glossary.html#Gargument-based-lookup).
TC++PL 8.2.2. D&E 17.4.

**using-directive** - directive making a
[namespace](https://stroustrup.com/glossary.html#Gnamespace) accessible.
See also: [argument-based
lookup](https://stroustrup.com/glossary.html#Gargument-based-lookup).
TC++PL 8.2.3. D&E 17.4.

**valarray** - [standard
library](https://stroustrup.com/glossary.html#Gstandard-library) numeric
[vector](https://stroustrup.com/glossary.html#Gvector)
[type](https://stroustrup.com/glossary.html#Gtype) supporting vector
operations. TC++PL 22.4.

**value** - the [bit](https://stroustrup.com/glossary.html#Gbit)s of an
[object](https://stroustrup.com/glossary.html#Gobject) interpreted
according to the objects
[type](https://stroustrup.com/glossary.html#Gtype).

**value return** - The
[semantics](https://stroustrup.com/glossary.html#Gsemantics) of
[function](https://stroustrup.com/glossary.html#Gfunction) return is to
pass a copy of the return
[value](https://stroustrup.com/glossary.html#Gvalue). The copy operation
is defined by the return
[type](https://stroustrup.com/glossary.html#Gtype)\'s [copy
constructor](https://stroustrup.com/glossary.html#Gcopy-constructor).
TC++PL 7.4.

**variable** - named
[object](https://stroustrup.com/glossary.html#Gobject) in a
[scope](https://stroustrup.com/glossary.html#Gscope). TC++PL 2.3.1,
10.4.3, D&E 2.3.

**variable definition**
-[declaration](https://stroustrup.com/glossary.html#Gdeclaration) of a
named [object](https://stroustrup.com/glossary.html#Gobject) of a data
[type](https://stroustrup.com/glossary.html#Gtype) without an
[extern](https://stroustrup.com/glossary.html#Gextern) specifier.

**vector** - [standard
library](https://stroustrup.com/glossary.html#Gstandard-library)
[template](https://stroustrup.com/glossary.html#Gtemplate) providing
contiguous storage, re-sizing and the useful
[push_back()](https://stroustrup.com/glossary.html#Gpush_back())
[function](https://stroustrup.com/glossary.html#Gfunction)s for adding
[element](https://stroustrup.com/glossary.html#Gelement)s at the end.
Vector is the default
[container](https://stroustrup.com/glossary.html#Gcontainer). See also:
[map](https://stroustrup.com/glossary.html#Gmap),
[multimap](https://stroustrup.com/glossary.html#Gmultimap), list,
[deque](https://stroustrup.com/glossary.html#Gdeque). TC++PL 3.7.1,
16.3.

**virtual** - keyword used to declare a [member
function](https://stroustrup.com/glossary.html#Gmember-function)
virtual.

**virtual base** - a base that is shared by all
[class](https://stroustrup.com/glossary.html#Gclass)es in a [class
hierarchy](https://stroustrup.com/glossary.html#Gclass-hierarchy) that
has declared it
[virtual](https://stroustrup.com/glossary.html#Gvirtual). TC++PL 15.2.4,
D&E 12.3, 12.4.1.

**virtual constructor** - a
[constructor](https://stroustrup.com/glossary.html#Gconstructor) cannot
be [virtual](https://stroustrup.com/glossary.html#Gvirtual), because to
create an [object](https://stroustrup.com/glossary.html#Gobject), we
need complete information of its
[type](https://stroustrup.com/glossary.html#Gtype). \"virtual
constructor\" is the [name](https://stroustrup.com/glossary.html#Gname)
of a technique for calling a virtual
[function](https://stroustrup.com/glossary.html#Gfunction) to create an
object of an appropriate type.
[Example](https://stroustrup.com/bs_faq2.html#virtual-ctor). TC++PL
12.4.4, 15.6.2.

**virtual destructor** - a
[destructor](https://stroustrup.com/glossary.html#Gdestructor) declared
[virtual](https://stroustrup.com/glossary.html#Gvirtual) to ensure that
the proper [derived
class](https://stroustrup.com/glossary.html#Gderived-class) destructor
is called if an [object](https://stroustrup.com/glossary.html#Gobject)
of a derived class is deleted through a
[pointer](https://stroustrup.com/glossary.html#Gpointer) to a [base
class](https://stroustrup.com/glossary.html#Gbase-class). If a class has
any virtual [function](https://stroustrup.com/glossary.html#Gfunction)s,
it should have a virtual destructor.
[Example](https://stroustrup.com/bs_faq.html#virtual-dtor). TC++PL
12.4.2, D&E 10.5.

**virtual member function** - a [member
function](https://stroustrup.com/glossary.html#Gmember-function) that a
[derived class](https://stroustrup.com/glossary.html#Gderived-class) can
[override](https://stroustrup.com/glossary.html#Goverride); the primary
mechanism for run-time
[polymorphism](https://stroustrup.com/glossary.html#Gpolymorphism) in
[C++](https://stroustrup.com/glossary.html#GC++). A
[virtual](https://stroustrup.com/glossary.html#Gvirtual) member function
is sometimes called a
[method](https://stroustrup.com/glossary.html#Gmethod). See also:
[overriding](https://stroustrup.com/glossary.html#Goverriding), [pure
virtual
function](https://stroustrup.com/glossary.html#Gpure-virtual-function).
TC++PL 2.5.4, 2.5.5, 12.2.6, D&E 3.5, 12.4.

**virtual-function pointer** - a
[pointer](https://stroustrup.com/glossary.html#Gpointer) to a
[class](https://stroustrup.com/glossary.html#Gclass)\'
[virtual](https://stroustrup.com/glossary.html#Gvirtual)
[function](https://stroustrup.com/glossary.html#Gfunction) table.

**virtual-function table** - table of all
[virtual](https://stroustrup.com/glossary.html#Gvirtual)
[function](https://stroustrup.com/glossary.html#Gfunction)s for a
[class](https://stroustrup.com/glossary.html#Gclass). The most common
way of implementing virtual functions is to have each
[object](https://stroustrup.com/glossary.html#Gobject) of a class with
virtual functions contain a virtual function
[pointer](https://stroustrup.com/glossary.html#Gpointer) pointing to the
class\' virtual function table.

**visitor pattern** - a way of using [double
dispatch](https://stroustrup.com/glossary.html#Gdouble-dispatch) to
simulate [virtual](https://stroustrup.com/glossary.html#Gvirtual) calls
without adding new virtual
[function](https://stroustrup.com/glossary.html#Gfunction)s.

**Visual C++** - Microsoft\'s implementation of
[C++](https://stroustrup.com/glossary.html#GC++) together with
proprietary libraries for Windows programming in an
[IDE](https://stroustrup.com/glossary.html#GIDE).

**void** - a keyword used to indicate an absence of information. TC++PL
4.1.1, 4.7.

**void\*** - [pointer](https://stroustrup.com/glossary.html#Gpointer) to
[void](https://stroustrup.com/glossary.html#Gvoid); that is, a pointer
to an [object](https://stroustrup.com/glossary.html#Gobject) of unknown
[type](https://stroustrup.com/glossary.html#Gtype); also called pointer
to [raw memory](https://stroustrup.com/glossary.html#Graw-memory). A
void\* cannot be used or assigned without a
[cast](https://stroustrup.com/glossary.html#Gcast). TC++PL 5.6, D&E
11.2.1, 11.2.3.

**volatile** - attribute of a
[declaration](https://stroustrup.com/glossary.html#Gdeclaration) telling
the [compiler](https://stroustrup.com/glossary.html#Gcompiler) that an
entity can have its [value](https://stroustrup.com/glossary.html#Gvalue)
changed by extralinguistic means; for example, a real time clock:
\"[extern](https://stroustrup.com/glossary.html#Gextern) volatile
[const](https://stroustrup.com/glossary.html#Gconst) long clock;\".
Limits optimizations. TC++PL A.7.1.

**vptr** - see [virtual-function
pointer](https://stroustrup.com/glossary.html#Gvirtual-function-pointer).

**vtbl** - see [virtual-function
table](https://stroustrup.com/glossary.html#Gvirtual-function-table).

**wchar_t** - wide [character
type](https://stroustrup.com/glossary.html#Gcharacter-type). Used to
hold characters of [character
set](https://stroustrup.com/glossary.html#Gcharacter-set)s that require
more than a [byte](https://stroustrup.com/glossary.html#Gbyte) to
represent, such as unicode. TC++PL 4.3, C.3.3. See also: large character
sets, universal character
[name](https://stroustrup.com/glossary.html#Gname).

**WG21** - a common abbreviation of the
[name](https://stroustrup.com/glossary.html#Gname) of the [ISO
C++](https://stroustrup.com/glossary.html#GISO-C++) standards committee.

**while-statement** - a
[loop](https://stroustrup.com/glossary.html#Gloop)
[statement](https://stroustrup.com/glossary.html#Gstatement) presenting
its condition \"at the top\". For example, while
([cin](https://stroustrup.com/glossary.html#Gcin)\>\>var)
vec.push_back(var);

**whitespace** - characters that a represented only by the space they
take up on a page or screen. The most common examples are space (\' \'),
newline (\'n\'), and tab (\'t\').

**word** - a number of
[byte](https://stroustrup.com/glossary.html#Gbyte)s that on a given
machine is particularly suied to holding an integers or a
[pointer](https://stroustrup.com/glossary.html#Gpointer). On many
machines, an [object](https://stroustrup.com/glossary.html#Gobject) must
be aligned on a word boundary for acceptable performance. An int is
typically a stored in a word. Often, a word is 4 bytes. See also:
[alignment](https://stroustrup.com/glossary.html#Galignment). TC++PL
4.6.

**xor** - synonym for \^, the bitwise exclusive or
[operator](https://stroustrup.com/glossary.html#Goperator) TC++PL C.3.1.

**zero** - see [NULL](https://stroustrup.com/glossary.html#GNULL)
