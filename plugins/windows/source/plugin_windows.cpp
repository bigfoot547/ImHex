#include <hex/plugin.hpp>

#include <hex/api/content_registry.hpp>

#include "views/view_tty_console.hpp"

namespace hex::plugin::windows {

    void registerLanguageEnUS();
    void registerLanguageDeDE();
    void registerLanguageZhCN();

    void addFooterItems();
    void addTitleBarButtons();
    void registerSettings();
}


IMHEX_PLUGIN_SETUP("Windows", "WerWolv", "Windows-only features") {
    using namespace hex::plugin::windows;

    hex::ContentRegistry::Views::add<ViewTTYConsole>();

    registerLanguageEnUS();
    registerLanguageDeDE();
    registerLanguageZhCN();

    addFooterItems();
    addTitleBarButtons();
    registerSettings();
}
