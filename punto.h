//
//  punto.h
//  Brujula
//
//  Created by Maria Jose Medrano on 21/10/13.
//  Copyright (c) 2013 Maria Jose Medrano. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface punto : NSObject
{

    NSNumber *x;
    NSNUmber *y;
    NSNumber *fecha;
    NSString *dato;
}


@property (nonatomic, retain) NSNumber *x;
@property (nonatomic, retain) NSNumber *y;
@property (nonatomic, retain) NSNumber *fecha;
@property (nonatomic, retain) NSString *dato;

@end
