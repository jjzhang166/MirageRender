#ifndef DIFFUSE_H
#define DIFFUSE_H

// std includes

// mirage includes
#include "../core/material.h"

namespace mirage
{

class DiffuseMaterial : public virtual Material
{
public:
    DiffuseMaterial(vec3 kd = vec3(), vec3 ke = vec3());
    virtual ~DiffuseMaterial() override;
    virtual void evalBRDF(const vec3 &p, const vec3 &n, const vec3 &Wi, const vec3 &Wo, float &brdf) const override;
    virtual void evalBTDF(const vec3 &p, const vec3 &n, const vec3 &Wi, const vec3 &Wo, float &btdf) const override;
    virtual void evalPDF(float &pdf) const override;
    virtual void evalWi(const vec3 &Wo, const vec3 &N, vec3 &Wr, vec3 &Wt) override;
private:
};

}

#endif // DIFFUSE_H
