# pushSwap
*Elementary Programming in C | Epitech | Tek1*

##### Purpose of the project :
- [x] Create a sorting algoritm with 2 linked lists and 11 functions to sort

## Build
```
$ make
```

## Usage
```
$ ./pushswap -h
USAGE
	./pushswap [list]
DESCRIPTION
	list: list of numbers to sort
```

### Exemple
```
$ ./pushswap 10 -5 2 5 -1
ra pb ra ra ra ra ra ra pb ra ra ra ra pb ra ra pb ra ra pb pa pa pa pa pa
```

## Functions

The two lists are named `l_a` and `l_b`.

#### sa
Swap the first two elements of `l_a` (nothing will happen if there aren’t enough elements).
#### sb
Swap the first two elements of `l_b` (nothing will happen if there aren’t enough elements).
#### sc
Execute `sa` and `sb` at the same time.
#### pa
Take the first element from `l_b` and move it to the first position on the `l_a` list (nothing will happen if
`l_b` is empty).
#### pb
Take the first element from `l_a` and move it to the first position on the `l_b` list (nothing will happen if
`l_a` is empty).
#### ra
Rotate `l_a` toward the beginning, the first element will become the last.
#### rb
Rotate `l_b` toward the beginning, the first element will become the last.
#### rr
Execute `ra` and `rb` at the same time.
#### rra
Rotate `l_a` toward the end, the last element will become the first.
#### rrb
Rotate `l_b` toward the end, the last element will become the first.
#### rrr
Execute `rra` and `rrb` at the same time.
