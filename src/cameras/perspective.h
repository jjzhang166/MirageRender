#ifndef PERSPECTIVE_H
#define PERSPECTIVE_H

// mirage includes
#include "../core/camera.h"

namespace mirage
{

class CameraPersp : public Camera
{
public:
    CameraPersp(Transform transform = Transform(), Film film = Film(), float fov = 70.0f);
    virtual void calcCamRay(const int x, const int y, Ray &ray) const override;
    void setFoV(float fov);
    float getFoV() const;
private:
    float m_fov;
};

}

#endif // PERSPECTIVE_H
