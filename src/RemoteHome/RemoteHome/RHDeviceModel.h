//
//  RHDeviceModel.h
//  RemoteHome
//
//  Created by James Wiegand on 1/8/13.
//  Copyright (c) 2013 James Wiegand. All rights reserved.
//

#import <Foundation/Foundation.h>

enum RHDeviceType {
    RHGarageDoorType = 0,
    RHSprinklerType = 1,
    RHLightType = 2
    };

@interface RHDeviceModel : NSObject

@property (nonatomic, retain) NSString* deviceName;
@property (nonatomic, retain) NSString* deviceSerial;
@property (nonatomic)  enum RHDeviceType deviceType;



@end
