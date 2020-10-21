# lem-in

lem-in is a [Codam/42](https://www.codam.nl/en/the-42-network) project about flow networks and graph theory. The goal is to write a program that reads a map, containing a number of "ants", nodes and links between nodes. The program then has to find the best combination of paths to find the the fastest way to transport the ants from the starting-node, to the end-node.

## How to use

To compile the program, run `make`. To use the program execute the following command:
`./lem-in < map_name` (for example: `./lem-in < maps/2_pats`)

## Maps

All map files contain:

* An integer representing the number of ants that must be sent from start to end.
* At least two nodes, written in the following format: `node_name x-coordinate y-coordinate` (for example `room_1 10 10`)
* A starting node and an end node, indicated by `##start` and `##end`
* Any number of links between nodes, written in the following format: `node_name1-node_name2` (for example `room_1-room_2`)

An example of a complete map:
```30
##start
start 12 3
##end
end 11 4
b 3 4
g 5 6
c 1 2
f 1 1
w 12 12
d 6 6
a 3 3
e 100 100
e-end
f-end
end-d
d-w
start-a
start-b
start-c
b-e
c-g
g-e
w-b
