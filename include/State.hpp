#pragma once

namespace potato
{
    class State
    {
    public:
        // virtual void [function]() = 0 is basically like an abstract method
        // in Java where the child must define the function.
        virtual void Init() = 0;

        virtual void HandleInput() = 0;
        virtual void Update(float dt) = 0;
        virtual void Draw(float dt) = 0;

        virtual void Pause() { }
        virtual void Resume() { }
    };
}
