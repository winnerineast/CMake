/* Distributed under the OSI-approved BSD 3-Clause License.  See accompanying
   file Copyright.txt or https://cmake.org/licensing for details.  */

#ifndef cmLDConfigTool_h
#define cmLDConfigTool_h

#include <string>
#include <vector>

class cmRuntimeDependencyArchive;

class cmLDConfigTool
{
public:
  cmLDConfigTool(cmRuntimeDependencyArchive* archive);
  virtual ~cmLDConfigTool() = default;

  virtual bool GetLDConfigPaths(std::vector<std::string>& paths) = 0;

protected:
  cmRuntimeDependencyArchive* Archive;
};

#endif
