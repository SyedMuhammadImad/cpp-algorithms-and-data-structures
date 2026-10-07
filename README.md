# C++ programming project

Completed console examples and data-structure project. The collection contains 55 standalone examples plus four property-check programs. Repairs were assisted; original local drafts remain unchanged. Existing author/team attribution is retained. Basic examples such as Hello World belong to this project collection and are not presented as separate substantial projects.

## Run

Install a C++17 compiler. Compile each source independently: `g++ -std=c++17 path/to/example.cpp -o example`. Each file has its own entry point; do not link the entire collection together. Run `python verify.py` with g++ on PATH to compile/run all examples and the included boundary cases in a temporary directory.

## Repairs and checks

Finished arithmetic, array search, triangle/diamond, linked-list and tree drafts. Fixed percentage/cost calculations, fractional BMI arithmetic, Gregorian date validation, division by zero, integer overflow, malformed input and EOF loops. Lists release their nodes; head/tail deletion handles empty and singleton lists. The array queue now reuses freed slots. Parking examples reject duplicate vehicles, bound overflow capacity and promote waiting vehicles when space opens. Misnamed C++ `.c` drafts use `.cpp`; three entirely empty draft files remain local rather than becoming fabricated examples.

The four property tests compare stack and queue behavior with standard-library reference containers over 20,000 seeded operations each, and example full parking capacity/overflow promotion. Record-list self-tests cover 1,000-record capacity, duplicate IDs and deletion/reuse. Normal runs cover every standalone program; additional cases check EOF, invalid input, leap-century dates, boundary search positions, overflow, zero divisors and adult BMI category boundaries.

## Scope

These are experimental console examples. The pharmacy example uses fixed sample prices and a toy 20% tax; it is not an operational billing system. Adult BMI classification follows the [CDC categories](https://www.cdc.gov/bmi/adult-calculator/bmi-categories.html) for ages 20+, and is a screening calculation, not a diagnosis. Stack/two-stack-queue demonstrations retain their legacy -1 empty sentinel; callers should check emptiness when storing negative values. No images, videos, executable binaries or credentials are included.

The accompanying reference notes are historical example material and text-only extracts; they are not assertions of independent authorship. `VERIFICATION.json` records the actual completion checks. Windows with MinGW was tested; other operating systems are supported by the verification script but not freshly executed here.

## Source index

- [1/1.cpp](1/1.cpp)
- [1/2.cpp](1/2.cpp)
- [1/main.cpp](1/main.cpp)
- [2/main.cpp](2/main.cpp)
- [additional_sources/ds/examples/4d/main.cpp](additional_sources/ds/examples/4d/main.cpp)
- [additional_sources/ds/examples/evenodd/main.cpp](additional_sources/ds/examples/evenodd/main.cpp)
- [additional_sources/ds/examples/linear search.cpp](additional_sources/ds/examples/linear%20search.cpp)
- [additional_sources/ds/examples/link list d.cpp](additional_sources/ds/examples/link%20list%20d.cpp)
- [additional_sources/ds/examples/link list s.cpp](additional_sources/ds/examples/link%20list%20s.cpp)
- [additional_sources/ds/examples/link list.cpp](additional_sources/ds/examples/link%20list.cpp)
- [additional_sources/ds/examples/main.cpp](additional_sources/ds/examples/main.cpp)
- [additional_sources/ds/examples/maxmin/main.cpp](additional_sources/ds/examples/maxmin/main.cpp)
- [additional_sources/ds/examples/maxmin/maxminn.cpp](additional_sources/ds/examples/maxmin/maxminn.cpp)
- [additional_sources/ds/examples/menu link list/link list d.cpp](additional_sources/ds/examples/menu%20link%20list/link%20list%20d.cpp)
- [additional_sources/ds/examples/practice.cpp](additional_sources/ds/examples/practice.cpp)
- [additional_sources/ds/examples/tasks/task 1/even odd.cpp](additional_sources/ds/examples/tasks/task%201/even%20odd.cpp)
- [additional_sources/ds/examples/tasks/task 1/maxminn.cpp](additional_sources/ds/examples/tasks/task%201/maxminn.cpp)
- [additional_sources/ds/examples/tasks/task 1/unique number.cpp](additional_sources/ds/examples/tasks/task%201/unique%20number.cpp)
- [additional_sources/ds/jhgukyhu/main.cpp](additional_sources/ds/jhgukyhu/main.cpp)
- [additional_sources/ds/practice/avl trees.cpp](additional_sources/ds/practice/avl%20trees.cpp)
- [additional_sources/ds/practice/bst.cpp](additional_sources/ds/practice/bst.cpp)
- [additional_sources/ds/practice/circular.cpp](additional_sources/ds/practice/circular.cpp)
- [additional_sources/ds/practice/doubly.cpp](additional_sources/ds/practice/doubly.cpp)
- [additional_sources/ds/practice/dsa pro comp.cpp](additional_sources/ds/practice/dsa%20pro%20comp.cpp)
- [additional_sources/ds/practice/dsa pro.cpp](additional_sources/ds/practice/dsa%20pro.cpp)
- [additional_sources/ds/practice/dsa theory examples task.cpp](additional_sources/ds/practice/dsa%20theory%20examples%20task.cpp)
- [additional_sources/ds/practice/queue with array.cpp](additional_sources/ds/practice/queue%20with%20array.cpp)
- [additional_sources/ds/practice/queue with stack.cpp](additional_sources/ds/practice/queue%20with%20stack.cpp)
- [additional_sources/ds/practice/singly.cpp](additional_sources/ds/practice/singly.cpp)
- [additional_sources/ds/practice/stack with array.cpp](additional_sources/ds/practice/stack%20with%20array.cpp)
- [additional_sources/pf/examples/examples 3/main.cpp](additional_sources/pf/examples/examples%203/main.cpp)
- [additional_sources/pf/examples/imad/main.cpp](additional_sources/pf/examples/imad/main.cpp)
- [additional_sources/pf/examples/loops/main.cpp](additional_sources/pf/examples/loops/main.cpp)
- [additional_sources/pf/examples/practice/array/main.cpp](additional_sources/pf/examples/practice/array/main.cpp)
- [additional_sources/pf/examples/practice/calendar-day/main.cpp](additional_sources/pf/examples/practice/calendar-day/main.cpp)
- [additional_sources/pf/examples/practice/integer-arithmetic/main.cpp](additional_sources/pf/examples/practice/integer-arithmetic/main.cpp)
- [additional_sources/pf/examples/practice/item-cost/main.cpp](additional_sources/pf/examples/practice/item-cost/main.cpp)
- [additional_sources/pf/examples/practice/loopx learning/main.cpp](additional_sources/pf/examples/practice/loopx%20learning/main.cpp)
- [additional_sources/pf/examples/practice/main.cpp](additional_sources/pf/examples/practice/main.cpp)
- [additional_sources/pf/examples/practice/manual 5/main.cpp](additional_sources/pf/examples/practice/manual%205/main.cpp)
- [additional_sources/pf/examples/practice/numeric-patterns/main.cpp](additional_sources/pf/examples/practice/numeric-patterns/main.cpp)
- [additional_sources/pf/examples/practice/pf examples tssk/main.cpp](additional_sources/pf/examples/practice/pf%20examples%20tssk/main.cpp)
- [additional_sources/pf/examples/practice/point-distance/main.cpp](additional_sources/pf/examples/practice/point-distance/main.cpp)
- [additional_sources/pf/examples/practice/q 1/main.cpp](additional_sources/pf/examples/practice/q%201/main.cpp)
- [additional_sources/pf/examples/practice/swictch.cpp](additional_sources/pf/examples/practice/swictch.cpp)
- [additional_sources/pf/examples/practice/switch/main.cpp](additional_sources/pf/examples/practice/switch/main.cpp)
- [components/3.cpp](components/3.cpp)
- [components/double-integer.cpp](components/double-integer.cpp)
- [components/main.cpp](components/main.cpp)
- [components 2/main.cpp](components%202/main.cpp)
- [examples/main.cpp](examples/main.cpp)
- [imad/main.cpp](imad/main.cpp)
- [pharmacy/main.cpp](pharmacy/main.cpp)
- [practice/main.cpp](practice/main.cpp)
- [regional-sales/main.cpp](regional-sales/main.cpp)
- [tests/test_parking_capacity.cpp](tests/test_parking_capacity.cpp)
- [tests/test_queue_array.cpp](tests/test_queue_array.cpp)
- [tests/test_queue_stacks.cpp](tests/test_queue_stacks.cpp)
- [tests/test_stack.cpp](tests/test_stack.cpp)
