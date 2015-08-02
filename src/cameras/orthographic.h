#ifndef ORTHOGRAPHIC_H
#define ORTHOGRAPHIC_H

// mirage includes
#include "../core/camera.h"

namespace mirage
{

class CameraOrtho : public Camera
{
public:
    CameraOrtho(Transform transform = Transform(), Film film = Film(), float zoom = 0.1f);
    virtual void calcCamRay(const int x, const int y, Ray &ray) const override;
private:
    float m_zoom;
};

}

#endif // ORTHOGRAPHIC_H
