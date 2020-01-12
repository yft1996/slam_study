//
// Created by yft on 2020/1/12.
//

#ifndef SLAM_PROJECT_01_CONFIG_H
#define SLAM_PROJECT_01_CONFIG_H

#include "myslam/common_include.h"

namespace  myslam
{
    class Config
    {
    private:
        static  std::shared_ptr<Config> config_;
        cv::FileStorage file_;

        Config(){}

    public:
        ~Config();

        static void setParameterFile(const std::string& filename);

        template <typename T>
        static T get(const std::string& key)
        {
            return T(Config::config_->file_[key]);
        }

    };
}

#endif //SLAM_PROJECT_01_CONFIG_H
