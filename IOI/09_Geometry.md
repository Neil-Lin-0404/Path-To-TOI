# Geometry

### Target
### - IOI / TOI / Long-term CP foundation

---

## 1. Geometry Foundations
| 觀念 | IOI importance |
|---|---|
| point as a 2D vector | 🌟🌟🌟🌟🌟 |
| coordinate plane mental model | 🌟🌟🌟🌟🌟 |
| integer geometry vs floating-point geometry awareness | 🌟🌟🌟🌟🌟 |
| vector notation and component form | 🌟🌟🌟🌟🌟 |
| translating geometric objects into code structures | 🌟🌟🌟🌟🌟 |
| using geometry as algebra on points / vectors, not as pure drawing intuition | 🌟🌟🌟🌟🌟 |
| precision / epsilon awareness | 🌟🌟🌟🌟 |
| when to avoid floating point and stay in integer arithmetic | 🌟🌟🌟🌟🌟 |

## 2. Point / Vector Operations
| 觀念 | IOI importance |
|---|---|
| point addition / subtraction | 🌟🌟🌟🌟🌟 |
| vector from A to B | 🌟🌟🌟🌟🌟 |
| scalar multiplication / division | 🌟🌟🌟🌟 |
| vector length / squared length | 🌟🌟🌟🌟🌟 |
| distance between points | 🌟🌟🌟🌟🌟 |
| dot product | 🌟🌟🌟🌟🌟 |
| cross product in 2D | 🌟🌟🌟🌟🌟 |
| geometric meaning of dot / cross | 🌟🌟🌟🌟🌟 |
| avoiding sqrt when comparing distances | 🌟🌟🌟🌟🌟 |

## 3. Orientation and Turn Geometry
| 觀念 | IOI importance |
|---|---|
| orientation of three points | 🌟🌟🌟🌟🌟 |
| clockwise / counterclockwise / collinear | 🌟🌟🌟🌟🌟 |
| using cross product for orientation | 🌟🌟🌟🌟🌟 |
| turn test as the foundation of many geometry algorithms | 🌟🌟🌟🌟🌟 |
| area-sign interpretation of cross product | 🌟🌟🌟🌟 |
| robust handling of collinear cases | 🌟🌟🌟🌟🌟 |
| recognizing orientation as the “if statement of geometry” | 🌟🌟🌟🌟🌟 |

## 4. Lines and Line Equations
| 觀念 | IOI importance |
|---|---|
| line through two points | 🌟🌟🌟🌟 |
| parametric line viewpoint | 🌟🌟🌟 |
| implicit line equation awareness | 🌟🌟🌟 |
| slope pitfalls and why vector / cross formulation is safer | 🌟🌟🌟🌟🌟 |
| checking parallel / same direction via vectors | 🌟🌟🌟🌟 |
| projection of a point onto a line awareness | 🌟🌟🌟 |
| line intersection awareness | 🌟🌟🌟🌟 |

## 5. Segments and Segment Intersection
| 觀念 | IOI importance |
|---|---|
| segment as bounded part of a line | 🌟🌟🌟🌟 |
| on-segment test | 🌟🌟🌟🌟🌟 |
| segment intersection using orientation tests | 🌟🌟🌟🌟🌟 |
| proper intersection vs touching / endpoint intersection | 🌟🌟🌟🌟 |
| handling collinear overlap cases | 🌟🌟🌟🌟🌟 |
| bounding-box quick check awareness | 🌟🌟🌟🌟 |
| segment intersection as a core geometry primitive | 🌟🌟🌟🌟🌟 |

## 6. Distance Geometry
| 觀念 | IOI importance |
|---|---|
| point-point distance | 🌟🌟🌟🌟🌟 |
| squared distance for comparison | 🌟🌟🌟🌟🌟 |
| point-line distance awareness | 🌟🌟🌟 |
| point-segment distance awareness | 🌟🌟🌟 |
| minimizing / comparing geometric distances | 🌟🌟🌟🌟 |
| projection-based distance reasoning awareness | 🌟🌟🌟 |
| nearest / farthest geometric comparison mindset | 🌟🌟🌟🌟 |

## 7. Dot Product and Projection Geometry
| 觀念 | IOI importance |
|---|---|
| angle relation through dot product | 🌟🌟🌟🌟 |
| acute / obtuse / right classification using dot product | 🌟🌟🌟🌟 |
| projection of one vector onto another awareness | 🌟🌟🌟 |
| checking if a projected point lies inside a segment awareness | 🌟🌟🌟 |
| orthogonality / perpendicularity via dot product | 🌟🌟🌟🌟 |
| using dot product to avoid explicit angle computation | 🌟🌟🌟🌟🌟 |

## 8. Polygon Foundations
| 觀念 | IOI importance |
|---|---|
| polygon as ordered point sequence | 🌟🌟🌟🌟 |
| triangle / convex polygon / concave polygon distinction | 🌟🌟🌟🌟 |
| polygon area by shoelace formula | 🌟🌟🌟🌟🌟 |
| signed area | 🌟🌟🌟🌟 |
| point ordering orientation in polygon formulas | 🌟🌟🌟🌟 |
| perimeter / edge traversal basics | 🌟🌟🌟 |
| area decomposition into cross products | 🌟🌟🌟🌟🌟 |

## 9. Convexity and Convex Hull
| 觀念 | IOI importance |
|---|---|
| convex vs concave | 🌟🌟🌟🌟 |
| why convexity simplifies geometry | 🌟🌟🌟🌟 |
| convex hull definition | 🌟🌟🌟🌟🌟 |
| monotonic chain / Graham scan awareness | 🌟🌟🌟🌟 |
| hull construction via orientation tests | 🌟🌟🌟🌟🌟 |
| removing bad turns while building hull | 🌟🌟🌟🌟🌟 |
| collinear-point handling on hull | 🌟🌟🌟🌟 |
| hull as preprocessing for farthest / extreme-point problems | 🌟🌟🌟🌟 |

## 10. Point in Polygon / Region Queries Awareness
| 觀念 | IOI importance |
|---|---|
| point in triangle awareness | 🌟🌟🌟 |
| point in convex polygon awareness | 🌟🌟🌟 |
| point in general polygon awareness | 🌟🌟 |
| winding / ray-casting style awareness | 🌟🌟 |
| boundary-case handling in inclusion queries | 🌟🌟🌟 |
| reducing region query to orientation / area tests | 🌟🌟🌟 |

## 11. Circle Geometry Essentials
| 觀念 | IOI importance |
|---|---|
| circle as center + radius | 🌟🌟🌟🌟 |
| point inside / on / outside circle | 🌟🌟🌟🌟 |
| circle-circle intersection awareness | 🌟🌟🌟 |
| line-circle intersection awareness | 🌟🌟🌟 |
| tangent awareness | 🌟🌟 |
| using squared distances for circle comparisons | 🌟🌟🌟🌟 |
| circle geometry as distance-constraint geometry | 🌟🌟🌟🌟 |

## 12. Rotating / Angular / Polar Awareness
| 觀念 | IOI importance |
|---|---|
| angle sorting awareness | 🌟🌟🌟 |
| polar-angle viewpoint | 🌟🌟🌟 |
| comparing directions without raw atan2 when possible | 🌟🌟🌟🌟 |
| rotating sweep awareness | 🌟🌟 |
| when geometry becomes “sort by direction / angle” rather than “sort by x” | 🌟🌟🌟 |

## 13. Closest / Farthest / Extremal Geometry Awareness
| 觀念 | IOI importance |
|---|---|
| closest pair awareness | 🌟🌟🌟 |
| farthest pair / diameter awareness | 🌟🌟🌟 |
| rotating calipers awareness | 🌟🌟 |
| extremal point / support point mindset | 🌟🌟🌟 |
| geometry optimization often means “reduce to ordering + local checks” | 🌟🌟🌟🌟 |

## 14. Lattice / Integer Geometry Awareness
| 觀念 | IOI importance |
|---|---|
| area from integer coordinates | 🌟🌟🌟🌟 |
| boundary / interior lattice-point awareness | 🌟🌟 |
| Pick’s theorem awareness | 🌟🌟 |
| gcd in lattice segment point counting awareness | 🌟🌟🌟 |
| integer geometry often lets you avoid floating-point errors | 🌟🌟🌟🌟🌟 |

## 15. Sweep / Sorting / Geometry Technique Interaction
| 觀念 | IOI importance |
|---|---|
| sorting points by x / y / angle | 🌟🌟🌟🌟🌟 |
| geometry + sweep-line awareness | 🌟🌟🌟 |
| active-set style geometric processing awareness | 🌟🌟 |
| reducing geometry to event ordering + local structure | 🌟🌟🌟🌟 |
| recognizing when a geometry problem is really a sorting / data-structure problem in disguise | 🌟🌟🌟🌟🌟 |

## 16. Numerical Robustness and Implementation Discipline
| 觀念 | IOI importance |
|---|---|
| epsilon handling for floating comparisons | 🌟🌟🌟🌟 |
| sign function / compare-with-eps discipline | 🌟🌟🌟🌟 |
| avoiding unstable slope formulas | 🌟🌟🌟🌟🌟 |
| overflow awareness in cross / dot computations | 🌟🌟🌟🌟🌟 |
| long long vs long double choice awareness | 🌟🌟🌟🌟 |
| separating geometric logic from numeric representation issues | 🌟🌟🌟🌟🌟 |
| carefully defining “touching”, “inside”, “strictly inside”, “intersecting” | 🌟🌟🌟🌟🌟 |

## 17. Geometry Problem Modeling Skill
| 觀念 | IOI importance |
|---|---|
| translating geometry words into vector / cross / dot / orientation tests | 🌟🌟🌟🌟🌟 |
| deciding whether the problem is about distance, direction, area, containment, or intersection | 🌟🌟🌟🌟🌟 |
| recognizing when geometry can be converted into pure algebra / prefix / sorting / graph form | 🌟🌟🌟🌟🌟 |
| choosing integer geometry over floating geometry whenever possible | 🌟🌟🌟🌟🌟 |
| recognizing when the real challenge is implementation robustness rather than algorithm novelty | 🌟🌟🌟🌟🌟 |
| choosing the simplest sufficient geometry primitive instead of overbuilding | 🌟🌟🌟🌟🌟 |
