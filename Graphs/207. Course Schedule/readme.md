There are a total of numCourses courses you have to take, labeled from 0 to numCourses - 1. You are given an array prerequisites where prerequisites[i] = [ai, bi] indicates that you must take course bi first if you want to take course ai.

For example, the pair [0, 1], indicates that to take course 0 you have to first take course 1.

Return true if you can finish all courses. Otherwise, return false.

![alt_text](sch.jpg)

Constraints:

1 <= numCourses <= 2000

0 <= prerequisites.length <= 5000

prerequisites[i].length == 2

0 <= ai, bi < numCourses

All the pairs prerequisites[i] are unique.

Intuition: The idea is to represent the courses and their prerequisites as a directed graph, where each course is a vertex. For each prerequisite [x, y], since course y must be completed before course x, we add a directed edge from y to x. If the graph contains a cycle, it means some courses depend on each other in a loop, making it impossible to complete all courses. If there is no cycle, a valid order exists to finish all courses.
