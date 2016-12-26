set -x

build_dir=b
if [[ "${1}" == "clean" ]] 
then
    rm -rf ${build_dir}
    echo "remove ${build_dir}"
    exit 0
fi

rm -rf ${build_dir}
mkdir ${build_dir}
cd ${build_dir}
cmake .. && make
