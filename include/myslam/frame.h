//
// Created by yft on 2020/1/12.
//

#ifndef SLAM_PROJECT_01_FRAME_H
#define SLAM_PROJECT_01_FRAME_H

#include "myslam/common_include.h"
#include "myslam/camera.h"
namespace  myslam
{
    class MapPoint;
    class Frame
    {
    public:
        typedef std::shared_ptr<Frame> Ptr;
        unsigned  long id_;
        double time_stamp_;
        SE3 T_c_w_;
        Camera::Ptr camera_;
        Mat color_,depth_;


        Frame();
        Frame(long id,double time_stamp=0,SE3 T_c_w=SE3(),Camera::Ptr camera= nullptr ,Mat color=Mat(),Mat depth=Mat());
        ~Frame();

        static Frame::Ptr createFrame();

        double findDepth(const cv::KeyPoint& kp);

        Vector3d getCamCenter()const;

        //检查一点是否在当前帧内
        bool isInFrame(const Vector3d& pt_world);

    };

}

#endif //SLAM_PROJECT_01_FRAME_H
