//
//  GKNavigationController.h
//  GKNavigationController
//
//  Created by QuintGao on 2017/6/20.
//  Copyright © 2017年 高坤. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "UIViewController+GKCategory.h"
#import "UIViewController+GKNavigationController.h"

/**
 根导航控制器
 */
@interface GKNavigationController : UINavigationController

/** 获取当前显示的控制器中的contentViewController */
@property (nonatomic, weak, readonly) UIViewController *gk_visibleViewController;

/** 获取当前栈顶的控制器中的contentViewController */
@property (nonatomic, weak, readonly) UIViewController *gk_topViewController;

/** 获取所有的contentViewController */
@property (nonatomic, weak, readonly) NSArray <__kindof UIViewController *> *gk_viewControllers;

/** 移除栈中的某个控制器（contentViewController） */
- (void)removeViewControllerWithClass:(Class)className;

@end
