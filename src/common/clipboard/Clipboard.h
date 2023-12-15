#pragma once
#include <memory>
#include "common/String.h"

class GameSave;

namespace Clipboard
{
	const ByteString clipboardFormatName = "application/vnd.powdertoy.save";
	void SetClipboardData(std::unique_ptr<GameSave> data);
	const GameSave *GetClipboardData();
	void Init();
	void RecreateWindow();
}
