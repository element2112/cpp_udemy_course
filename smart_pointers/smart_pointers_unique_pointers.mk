##
## Auto Generated makefile by CodeLite IDE
## any manual changes will be erased      
##
## Debug
ProjectName            :=smart_pointers_unique_pointers
ConfigurationName      :=Debug
WorkspacePath          :=C:/Users/bs009/Desktop/udemy_cpp/cpp_udemy_course
ProjectPath            :=C:/Users/bs009/Desktop/udemy_cpp/cpp_udemy_course/smart_pointers
IntermediateDirectory  :=$(ConfigurationName)
OutDir                 := $(IntermediateDirectory)
CurrentFileName        :=
CurrentFilePath        :=
CurrentFileFullPath    :=
User                   :=bs009
Date                   :=12/05/2020
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
ObjectsFileList        :="smart_pointers_unique_pointers.txt"
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
Objects0=$(IntermediateDirectory)/I_Printable.cpp$(ObjectSuffix) $(IntermediateDirectory)/main.cpp$(ObjectSuffix) 



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
$(IntermediateDirectory)/I_Printable.cpp$(ObjectSuffix): I_Printable.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/I_Printable.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/I_Printable.cpp$(DependSuffix) -MM I_Printable.cpp
	$(CXX) $(IncludePCH) $(SourceSwitch) "C:/Users/bs009/Desktop/udemy_cpp/cpp_udemy_course/smart_pointers/I_Printable.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/I_Printable.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/I_Printable.cpp$(PreprocessSuffix): I_Printable.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/I_Printable.cpp$(PreprocessSuffix) I_Printable.cpp

$(IntermediateDirectory)/main.cpp$(ObjectSuffix): main.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/main.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/main.cpp$(DependSuffix) -MM main.cpp
	$(CXX) $(IncludePCH) $(SourceSwitch) "C:/Users/bs009/Desktop/udemy_cpp/cpp_udemy_course/smart_pointers/main.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/main.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/main.cpp$(PreprocessSuffix): main.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/main.cpp$(PreprocessSuffix) main.cpp


-include $(IntermediateDirectory)/*$(DependSuffix)
##
## Clean
##
clean:
	$(RM) -r $(ConfigurationName)/


