//
//  XLLineLayoutConstraint.h
//  TestDemo
//
//  Created by 王晓磊 on 16/6/20.
//  Copyright © 2016年 王晓磊. All rights reserved.
//

#import <UIKit/UIKit.h>

/**
 *  因为故事版不能设置0.5像素的线，所以自定义一个NSLayoutConstraint类
 *  只需将故事版中需要设置0.5像素的线的高度约束类NSLayoutConstraint设置为此类
 */
@interface XLLineLayoutConstraint : NSLayoutConstraint

@end