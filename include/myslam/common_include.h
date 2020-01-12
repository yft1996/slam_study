//
// Created by yft on 2020/1/12.
//

#ifndef SLAM_PROJECT_01_COMMON_INCLUDE_H
#define SLAM_PROJECT_01_COMMON_INCLUDE_H

#include <Eigen/Core>
#include <Eigen/Geometry>
using Eigen::Vector2d;
using Eigen::Vector3d;

// for Sophus
#include <sophus/se3.h>
#include <sophus/so3.h>
using Sophus::SE3;

// for cv
#include <opencv2/core/core.hpp>
using cv::Mat;

// std
#include <vector>
#include <list>
#include <memory>
#include <string>
#include <iostream>
#include <set>
#include <unordered_map>
#include <map>

using namespace std;


#endif //SLAM_PROJECT_01_COMMON_INCLUDE_H
