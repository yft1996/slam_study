add_library(myslam SHARED
            camera.cpp
        config.cpp
        frame.cpp
        map.cpp
        mappoint.cpp
        visual_odometry.cpp
        )

target_link_libraries(myslam ${THIRD_PAPTY_LIBS})