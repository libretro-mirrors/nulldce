#pragma once
#include "common.h"

void mds_DriveReadSector(u8 * buff,u32 StartSector,u32 SectorCount,u32 secsz);
void mds_DriveGetTocInfo(TocInfo* toc,DiskArea area);
u32 mds_DriveGetDiscType();
bool mds_init(wchar* file);
void mds_term();
void mds_GetSessionsInfo(SessionInfo* sessions);
