//
// Created by yft on 2020/1/12.
//

#ifndef SLAM_PROJECT_01_MAPPOINT_H
#define SLAM_PROJECT_01_MAPPOINT_H

#include "myslam/common_include.h"
namespace myslam
{
    class Frame;
    class MapPoint
    {
    public:
        typedef  shared_ptr<MapPoint> Ptr;
        unsigned  long id_;
        Vector3d pos_;
        Vector3d norm_;//视线方向的模
        Mat descriptor_;
        int observed_times_;
        int correct_times_;

        MapPoint();
        MapPoint(long id,Vector3d position,Vector3d norm);

        static MapPoint::Ptr createMapPoint();
    };

}

#endif //SLAM_PROJECT_01_MAPPOINT_H
