#ifndef ASTEROID_H
#define ASTEROID_H

#include "GameObject.h"

class Asteroid : public GameObject {
public:
    Asteroid();
    ~Asteroid();

    virtual bool CollisionTest(shared_ptr<GameObject> o) override;
    virtual void OnCollision(const GameObjectList& objects) override;

    void SplitAsteroid();

private:
};

#endif // ASTEROID_H
