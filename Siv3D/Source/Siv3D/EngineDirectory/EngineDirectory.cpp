﻿//-----------------------------------------------
//
//	This file is part of the Siv3D Engine.
//
//	Copyright (c) 2008-2017 Ryo Suzuki
//	Copyright (c) 2016-2017 OpenSiv3D Project
//
//	Licensed under the MIT License.
//
//-----------------------------------------------

# include "EngineDirectory.hpp"
# include <Siv3D/FileSystem.hpp>
# include <Siv3D/Version.hpp>

namespace s3d
{
	namespace EngineDirectory
	{
		FilePath CurrectVersionCommon()
		{
			return FileSystem::SpecialFolderPath(SpecialFolder::LocalAppData) + L"Siv3D/OpenSiv3D" Siv3DVersion L"/";
		}

		FilePath LicensePath()
		{
			return CurrectVersionCommon() + L"Licenses.html";
		}
	}
}