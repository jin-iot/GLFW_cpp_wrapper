#ifndef _SHADER_HPP_
#define _SHADER_HPP_

#include <string>
GLuint load_shaders_offline(const char * vertex_file_path,const char * fragment_file_path);

GLuint load_shaders_online(std::string& vertex,std::string& fragment);

#endif
