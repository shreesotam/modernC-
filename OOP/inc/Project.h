#include <string>
#include<iostream>
#include <memory>

class Project
{
    std::string mName;
    public:
    void SetName(const std::string &name);
    void ShowProjectDetails() const;
};

class Employee
{
    std::shared_ptr<Project> mProject{};
    public:
    void SetProject(const std::shared_ptr<Project>&prj);
    const std::shared_ptr<Project> &GetProject() const;
};