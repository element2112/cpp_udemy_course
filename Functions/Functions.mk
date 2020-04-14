##
## Auto Generated makefile by CodeLite IDE
## any manual changes will be erased      
##
## Debug
ProjectName            :=Functions
ConfigurationName      :=Debug
WorkspacePath          :=C:/Users/torchgirl/Desktop/udemy_cpp_tutorial_workspace
ProjectPath            :=C:/Users/torchgirl/Desktop/udemy_cpp_tutorial_workspace/Functions
IntermediateDirectory  :=$(ConfigurationName)
OutDir                 := $(IntermediateDirectory)
CurrentFileName        :=
CurrentFilePath        :=
CurrentFileFullPath    :=
User                   :=torchgirl
Date                   :=13/04/2020
CodeLitePath           :="C:/Program Files/CodeLite"
LinkerName             :="C:/Program Files/mingw-w64/mingw64/bin/g++.exe"
SharedObjectLinkerName :="C:/Program Files/mingw-w64/mingw64/bin/g++.exe" -shared -fPIC
ObjectSuffix           :=.o
DependSuffix           :=.o.d
PreprocessSuffix       :=.i
DebugSwitch            :=-g 
IncludeSwitch          :=-I
LibrarySwitch          :=-l
OutputSwitch           :=-o 
LibraryPathSwitch      :=-L
PreprocessorSwitch     :=-D
SourceSwitch           :=-c 
OutputFile             :=$(IntermediateDirectory)/$(ProjectName)
Preprocessors          :=
ObjectSwitch           :=-o 
ArchiveOutputSwitch    := 
PreprocessOnlySwitch   :=-E
ObjectsFileList        :="Functions.txt"
PCHCompileFlags        :=
MakeDirCommand         :=makedir
RcCmpOptions           := 
RcCompilerName         :="C:/Program Files/mingw-w64/mingw64/bin/windres.exe"
LinkOptions            :=  
IncludePath            :=  $(IncludeSwitch). $(IncludeSwitch). 
IncludePCH             := 
RcIncludePath          := 
Libs                   := 
ArLibs                 :=  
LibPath                := $(LibraryPathSwitch). 

##
## Common variables
## AR, CXX, CC, AS, CXXFLAGS and CFLAGS can be overriden using an environment variables
##
AR       := "C:/Program Files/mingw-w64/mingw64/bin/ar.exe" rcu
CXX      := "C:/Program Files/mingw-w64/mingw64/bin/g++.exe"
CC       := "C:/Program Files/mingw-w64/mingw64/bin/gcc.exe"
CXXFLAGS :=  -g -O0 -Wall $(Preprocessors)
CFLAGS   :=  -g -O0 -Wall $(Preprocessors)
ASFLAGS  := 
AS       := "C:/Program Files/mingw-w64/mingw64/bin/as.exe"


##
## User defined environment variables
##
CodeLiteDir:=C:\Program Files\CodeLite
Objects0=$(IntermediateDirectory)/recursion.cpp$(ObjectSuffix) $(IntermediateDirectory)/gen_functions.cpp$(ObjectSuffix) $(IntermediateDirectory)/main.cpp$(ObjectSuffix) $(IntermediateDirectory)/inline_functions.cpp$(ObjectSuffix) 



Objects=$(Objects0) 

##
## Main Build Targets 
##
.PHONY: all clean PreBuild PrePreBuild PostBuild MakeIntermediateDirs
all: $(OutputFile)

$(OutputFile): $(IntermediateDirectory)/.d $(Objects) 
	@$(MakeDirCommand) $(@D)
	@echo "" > $(IntermediateDirectory)/.d
	@echo $(Objects0)  > $(ObjectsFileList)
	$(LinkerName) $(OutputSwitch)$(OutputFile) @$(ObjectsFileList) $(LibPath) $(Libs) $(LinkOptions)

MakeIntermediateDirs:
	@$(MakeDirCommand) "$(ConfigurationName)"


$(IntermediateDirectory)/.d:
	@$(MakeDirCommand) "$(ConfigurationName)"

PreBuild:


##
## Objects
##
$(IntermediateDirectory)/recursion.cpp$(ObjectSuffix): recursion.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/recursion.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/recursion.cpp$(DependSuffix) -MM recursion.cpp
	$(CXX) $(IncludePCH) $(SourceSwitch) "C:/Users/torchgirl/Desktop/udemy_cpp_tutorial_workspace/Functions/recursion.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/recursion.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/recursion.cpp$(PreprocessSuffix): recursion.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/recursion.cpp$(PreprocessSuffix) recursion.cpp

$(IntermediateDirectory)/gen_functions.cpp$(ObjectSuffix): gen_functions.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/gen_functions.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/gen_functions.cpp$(DependSuffix) -MM gen_functions.cpp
	$(CXX) $(IncludePCH) $(SourceSwitch) "C:/Users/torchgirl/Desktop/udemy_cpp_tutorial_workspace/Functions/gen_functions.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/gen_functions.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/gen_functions.cpp$(PreprocessSuffix): gen_functions.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/gen_functions.cpp$(PreprocessSuffix) gen_functions.cpp

$(IntermediateDirectory)/main.cpp$(ObjectSuffix): main.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/main.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/main.cpp$(DependSuffix) -MM main.cpp
	$(CXX) $(IncludePCH) $(SourceSwitch) "C:/Users/torchgirl/Desktop/udemy_cpp_tutorial_workspace/Functions/main.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/main.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/main.cpp$(PreprocessSuffix): main.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/main.cpp$(PreprocessSuffix) main.cpp

$(IntermediateDirectory)/inline_functions.cpp$(ObjectSuffix): inline_functions.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/inline_functions.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/inline_functions.cpp$(DependSuffix) -MM inline_functions.cpp
	$(CXX) $(IncludePCH) $(SourceSwitch) "C:/Users/torchgirl/Desktop/udemy_cpp_tutorial_workspace/Functions/inline_functions.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/inline_functions.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/inline_functions.cpp$(PreprocessSuffix): inline_functions.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/inline_functions.cpp$(PreprocessSuffix) inline_functions.cpp


-include $(IntermediateDirectory)/*$(DependSuffix)
##
## Clean
##
clean:
	$(RM) -r $(ConfigurationName)/


