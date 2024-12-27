#include <iostream>
#include <basic.h>
#include <stdlib.h>
#include <stdio.h>
#include <Car.h>
#include <Integer.h>
#include <Number.h>
#include <memory>
#include<Project.h>

void ShowInfo(std::shared_ptr<Employee> &emp)
{
    emp->GetProject()->ShowProjectDetails();
}
int main() {
    std::shared_ptr<Project> prj {new Project{}};
    prj->SetName("video decoder");
    std::shared_ptr<Employee>e1 {new Employee{}};
    e1->SetProject(prj);
    std::shared_ptr<Employee>e2 {new Employee{}};
    e2->SetProject(prj);
    ShowInfo(e1);
    ShowInfo(e2);
    prj->ShowProjectDetails();

    return 0;
}
