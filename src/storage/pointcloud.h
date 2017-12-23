#ifndef POINTCLOUD_H
#define POINTCLOUD_H

#include <array>

namespace pc {

template<typename T, uint32_t width, uint32_t height>
class PointCloudArray {

public:
    PointCloudArray();
    ~PointCloudArray();

private:
    std::array<std::array<T, width>, height> x;

};


class PointCloud
{
public:
    PointCloud();
};

} /* namespace pc */

#endif // POINTCLOUD_H
