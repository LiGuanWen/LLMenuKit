//
//  AppDelegate.h
//  LLMenuKit
//
//  Created by Lilong on 2018/3/11.
//  Copyright © 2018年 第七代目. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <CoreData/CoreData.h>

@interface AppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic) UIWindow *window;

@property (readonly, strong) NSPersistentContainer *persistentContainer;

- (void)saveContext;


@end

