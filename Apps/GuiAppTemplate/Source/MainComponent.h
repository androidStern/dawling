#pragma once

#include "HelloWorldLabel.h"
#include <tracktion_engine/tracktion_engine.h>

namespace te = tracktion;

namespace GuiApp
{

class MainComponent : public Component
{
public:
    MainComponent();

    void paint(Graphics&) override;
    void resized() override;

private:
    HelloWorldLabel helloWorld;

    // te::Engine engine { "Dawsome" };
     te::Engine engine { "Dawsome" , std::unique_ptr<te::UIBehaviour>(), nullptr };

    JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR(MainComponent)
};

} // namespace GuiApp
