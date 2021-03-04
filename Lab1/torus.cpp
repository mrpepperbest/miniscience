#include <set>
#include <gmsh.h>

int main(int argc, char **argv)
{
    gmsh::initialize();
    gmsh::model::add("thor");

    //Torus 1
    double lc = 1e-2;

    for(int i = 0; i < 3; i++) {
        gmsh::model::geo::addPoint(0, 0, .1*i, lc, 1+3*i);
        gmsh::model::geo::addPoint(.2, 0, .1*i, lc, 2+3*i);
        gmsh::model::geo::addPoint(-.2, 0, .1*i, lc, 3+3*i);
        gmsh::model::geo::addCircleArc(2+3*i, 1+3*i, 3+3*i, 1+2*i);
        gmsh::model::geo::addCircleArc(3+3*i, 1+3*i, 2+3*i, 2+2*i);
    }

    gmsh::model::geo::addPoint(-.3, 0, .1, lc, 10);
    gmsh::model::geo::addPoint(.3, 0, .1, lc, 11);
    gmsh::model::geo::addPoint(-.1, 0, .1, lc, 12);
    gmsh::model::geo::addPoint(.1, 0, .1, lc, 13);


    gmsh::model::geo::addCircleArc(10,4,11, 11);
    gmsh::model::geo::addCircleArc(11,4,10, 12);
    gmsh::model::geo::addCircleArc(12,4,13, 13);
    gmsh::model::geo::addCircleArc(13,4,12, 14);

    gmsh::model::geo::addCircleArc(2,5,11, 15, 0, 1);
    gmsh::model::geo::addCircleArc(11,5,8, 16, 0, 1);
    gmsh::model::geo::addCircleArc(8,5,13, 17, 0, 1);
    gmsh::model::geo::addCircleArc(13,5,2, 18, 0, 1);


    gmsh::model::geo::addCircleArc(3,6,10, 19, 0, 1);
    gmsh::model::geo::addCircleArc(10,6,9, 20, 0, 1);
    gmsh::model::geo::addCircleArc(9,6,12, 21, 0, 1);
    gmsh::model::geo::addCircleArc(12,6,3, 22, 0, 1);

    gmsh::model::geo::addCurveLoop({17,14,-21,-5}, 1);
    gmsh::model::geo::addSurfaceFilling({1}, 1);

    gmsh::model::geo::addCurveLoop({17,-13,-21,6}, 2);
    gmsh::model::geo::addSurfaceFilling({2}, 2);

    gmsh::model::geo::addCurveLoop({-5,-16, 12, 20}, 3);
    gmsh::model::geo::addSurfaceFilling({3}, 3);

    gmsh::model::geo::addCurveLoop({6,-16,-11,20}, 4);
    gmsh::model::geo::addSurfaceFilling({4}, 4);

    gmsh::model::geo::addCurveLoop({-15,-2,19,11}, 5);
    gmsh::model::geo::addSurfaceFilling({5}, 5);

    gmsh::model::geo::addCurveLoop({-15,1,19,-12}, 6);
    gmsh::model::geo::addSurfaceFilling({6}, 6);

    gmsh::model::geo::addCurveLoop({-18,14,22,-1}, 7);
    gmsh::model::geo::addSurfaceFilling({7}, 7);

    gmsh::model::geo::addCurveLoop({-18,-13,22,2}, 8);
    gmsh::model::geo::addSurfaceFilling({8}, 8);

    gmsh::model::geo::addSurfaceLoop({1, 2, 3, 4, 5, 6, 7, 8}, 1);

    //Torus cavity
    gmsh::model::geo::addPoint(0, 0, .05, lc, 1+50);
    gmsh::model::geo::addPoint(.2, 0, .05, lc, 2+50);
    gmsh::model::geo::addPoint(-.2, 0, .05, lc, 3+50);
    gmsh::model::geo::addCircleArc(2+50, 1+50, 3+50, 1+50);
    gmsh::model::geo::addCircleArc(3+50, 1+50, 2+50, 2+50);

    gmsh::model::geo::addPoint(0, 0, .1, lc, 1+3+50);
    gmsh::model::geo::addPoint(.2, 0, .1, lc, 2+3+50);
    gmsh::model::geo::addPoint(-.2, 0, .1, lc, 3+3+50);
    gmsh::model::geo::addCircleArc(2+3+50, 1+3+50, 3+3+50, 1+2+50);
    gmsh::model::geo::addCircleArc(3+3+50, 1+3+50, 2+3+50, 2+2+50);

    gmsh::model::geo::addPoint(0, 0, .15, lc, 1+3*2+50);
    gmsh::model::geo::addPoint(.2, 0, .15, lc, 2+3*2+50);
    gmsh::model::geo::addPoint(-.2, 0, .15, lc, 3+3*2+50);
    gmsh::model::geo::addCircleArc(2+3*2+50, 1+3*2+50, 3+3*2+50, 1+2*2+50);
    gmsh::model::geo::addCircleArc(3+3*2+50, 1+3*2+50, 2+3*2+50, 2+2*2+50);


    gmsh::model::geo::addPoint(-.25, 0, .1, lc, 10+50);
    gmsh::model::geo::addPoint(.25, 0, .1, lc, 11+50);
    gmsh::model::geo::addPoint(-.15, 0, .1, lc, 12+50);
    gmsh::model::geo::addPoint(.15, 0, .1, lc, 13+50);


    gmsh::model::geo::addCircleArc(10+50,4+50,11+50, 11+50);
    gmsh::model::geo::addCircleArc(11+50,4+50,10+50, 12+50);
    gmsh::model::geo::addCircleArc(12+50,4+50,13+50, 13+50);
    gmsh::model::geo::addCircleArc(13+50,4+50,12+50, 14+50);

    gmsh::model::geo::addCircleArc(2+50,5+50,11+50, 15+50, 0, 1);
    gmsh::model::geo::addCircleArc(11+50,5+50,8+50, 16+50, 0, 1);
    gmsh::model::geo::addCircleArc(8+50,5+50,13+50, 17+50, 0, 1);
    gmsh::model::geo::addCircleArc(13+50,5+50,2+50, 18+50, 0, 1);


    gmsh::model::geo::addCircleArc(3+50,6+50,10+50, 19+50, 0, 1);
    gmsh::model::geo::addCircleArc(10+50,6+50,9+50, 20+50, 0, 1);
    gmsh::model::geo::addCircleArc(9+50,6+50,12+50, 21+50, 0, 1);
    gmsh::model::geo::addCircleArc(12+50,6+50,3+50, 22+50, 0, 1);

    gmsh::model::geo::addCurveLoop({17+50,14+50,-21-50,-5-50}, 1+50);
    gmsh::model::geo::addSurfaceFilling({1+50}, 1+50);

    gmsh::model::geo::addCurveLoop({17+50,-13-50,-21-50,6+50}, 2+50);
    gmsh::model::geo::addSurfaceFilling({2+50}, 2+50);

    gmsh::model::geo::addCurveLoop({-5-50,-16-50, 12+50, 20+50}, 3+50);
    gmsh::model::geo::addSurfaceFilling({3+50}, 3+50);

    gmsh::model::geo::addCurveLoop({6+50,-16-50,-11-50,20+50}, 4+50);
    gmsh::model::geo::addSurfaceFilling({4+50}, 4+50);

    gmsh::model::geo::addCurveLoop({-15-50,-2-50,19+50,11+50}, 5+50);
    gmsh::model::geo::addSurfaceFilling({5+50}, 5+50);

    gmsh::model::geo::addCurveLoop({-15-50,1+50,19+50,-12-50}, 6+50);
    gmsh::model::geo::addSurfaceFilling({6+50}, 6+50);

    gmsh::model::geo::addCurveLoop({-18-50,14+50,22+50,-1-50}, 7+50);
    gmsh::model::geo::addSurfaceFilling({7+50}, 7+50);

    gmsh::model::geo::addCurveLoop({-18-50,-13-50,22+50,2+50}, 8+50);
    gmsh::model::geo::addSurfaceFilling({8+50}, 8+50);

    gmsh::model::geo::addSurfaceLoop({1+50, 2+50, 3+50, 4+50, 5+50, 6+50, 7+50, 8+50}, 2);


    gmsh::model::geo::addVolume({1,-2});

    gmsh::model::geo::synchronize();


    gmsh::model::mesh::generate(3);

    gmsh::write("..//torus.msh");
    gmsh::write("..//torus.stl");

    std::set<std::string> args(argv, argv + argc);
    if(!args.count("-nopopup")) gmsh::fltk::run();

    gmsh::finalize();

    return 0;
}