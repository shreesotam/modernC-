#include "Project.h"

void Project::SetName(const std::string &name)
{
    mName=name;
}

void Project::ShowProjectDetails() const
{
    std::cout<<"Project name detail "<<mName<<"\n";
}

void Employee::SetProject(const std::shared_ptr<Project>& prj)
{
    mProject =prj;
}

const std::shared_ptr<Project> &Employee::GetProject() const
{
    return mProject;
}
