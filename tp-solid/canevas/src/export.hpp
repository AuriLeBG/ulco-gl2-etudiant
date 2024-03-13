#include <string>
#include <vector>
#include <map>
#include "Forme.hpp"

using Description = std::map<std::string, std::string>;


class Export
{
public:
    void exportJSON(std::ostream & os, const std::vector<Description>) const;
    void exportYAML(std::ostream & os, const std::vector<Description>) const;

};