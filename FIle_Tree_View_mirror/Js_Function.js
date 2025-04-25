.pragma library

// 新的路径解析函数
function parseDroppedPath(rawPath) {
    // 去除 file:// 前缀
    const purePath = rawPath.replace(/^file:\/\/\//, '');
    const fileName = purePath.split('/').pop();

    // 判断是否为文件夹（无扩展名）
    const hasExtension = fileName.lastIndexOf('.') > 0; // 至少有一个有效扩展名
    const isFolder = !hasExtension;

    // 提取类型（扩展名或 File_Set）
    let type = isFolder ? "File_Set" : fileName.split('.').pop().toLowerCase();

    return {
        name: fileName,
        type: type,
        purePath: purePath
    };
}
