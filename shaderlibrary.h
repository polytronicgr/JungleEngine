#ifndef SHADER_LIBRARY_H
#define SHADER_LIBRARY_H

#include <map>
#include <string>
#include <stdexcept>
#include "Shaders.hpp"

using namespace std;

class ShaderLibrary {
	public:
		ShaderLibrary();
		~ShaderLibrary();

        ///!Hamdy
        static void initializeShaders();
        //Phong
        static Shader PhongShader;
        static Shader * GetPhongShader();

        //Shadow
        static Shader simpleDepthShader;
        static Shader * GetsimpleDepthShader();

        //TextureToScreen
        static Shader TexToScreen;
        static Shader * GetTexToScreen();

        //cubeMapShader
        static Shader cubeMapShader;
        static Shader * GetcubeMapShader();

        //BoundingBox render
        static Shader BoundingboxShader;
        static Shader * GetBoundingboxShader();

        //MessagesShader
        static Shader MessagesShader;
        static Shader * GetMessagesShader();



        void AddShader(string shaderName, Shader * shader);
		Shader* GetShader(string shaderName) const;
	private:
		map<string, Shader*> shaders;
};

#endif
