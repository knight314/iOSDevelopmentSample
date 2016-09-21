//
//  Teacher+CoreDataProperties.h
//  CollegeManagementSystem
//
//  Created by Apple on 16/9/21.
//  Copyright © 2016年 GJ. All rights reserved.
//
//  Choose "Create NSManagedObject Subclass…" from the Core Data editor menu
//  to delete and recreate this implementation file for your updated model.
//

#import "Teacher.h"

NS_ASSUME_NONNULL_BEGIN

@interface Teacher (CoreDataProperties)


@property (nullable, nonatomic, retain) NSString *name;

@property (nullable, nonatomic, retain) NSSet<Course *> *courses;
@property (nullable, nonatomic, retain) MyClass *myclass;

@end

@interface Teacher (CoreDataGeneratedAccessors)

- (void)addCoursesObject:(Course *)value;
- (void)removeCoursesObject:(Course *)value;
- (void)addCourses:(NSSet<Course *> *)values;
- (void)removeCourses:(NSSet<Course *> *)values;

@end

NS_ASSUME_NONNULL_END
