an approach to digital systems simulation
=======

## what is this thing?

This is a simulation for digital systems and digital circuits.

this is not for real world simulations.  
it does not simulate like real circuits.  
The only timing that matters is clock timing,  
others such as system delay or true timing are ignored.

it tries to show the resault as fast as possible.

## so, how are we going to do this?

We are using C++ language which is object-oriented,  
so we are able to use objects.

We are doing this by these few steps:

1. Objects definition
2. making connections
3. compiling and optimization
4. step-by-step simulation

we are going to do each step.


## objects difinition

any system is defined as an object with one or several inputs and outputs.  
each wire carries a signal which can be one of these:

1. high or 1
2. low or 0
3. high impedance (not connected)
4. ... _TODO_

systems are classified as two types:

1. combinational
2. sequential

**combinational systems** are defined as input-to-output truth tables.  
suppose for a simple **AND** gate to be like this:

'IN1	IN2	OUT  
1	1	1  
1	0	0  
0	1	0  
0	0	0'

so output can be defined like this:

'OUT = f(In1, In2)'

while f can be like a 2-by-2 matrix where  
columns are situation of In1 and raws are situation of In2.

we are going to define them a bit different, since  
there are usually more than two inputs.

**sequential systems** have memory including previous outputs,  
and also may depend on clock.

so they work similar to combinational systems with only two differences:

1. truth table also includes memory.
2. they don't change output signals until clock ticks.

of course the second rule only applies to systems which use clocks.


